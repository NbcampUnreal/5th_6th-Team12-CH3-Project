// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Sword.h"
#include "MainCharacter.h"
#include "Components/BoxComponent.h"
#include "MonsterAICharacter.h"

AWeapon_Sword::AWeapon_Sword()
{
	SwordMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SwordMesh"));
	MeleeCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MeleeCollisionBox"));

	SwordMesh->SetupAttachment(RootComponent);
	MeleeCollisionBox->SetupAttachment(SwordMesh);


	MeleeCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeleeCollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	MeleeCollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore); // ��� ä�� ����
	MeleeCollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap); // Pawn ä�ΰ� ������ ����
}

void AWeapon_Sword::BeginPlay()
{
    Super::BeginPlay();

    if (MeleeCollisionBox)
    {
        MeleeCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AWeapon_Sword::OnMeleeOverlap);
    }
}

void AWeapon_Sword::Attack()
{
	Super::Attack();

	UE_LOG(LogTemp, Warning, TEXT("Default Sword Attack"));

	MeleeCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HitMonsters.Empty();

}

void AWeapon_Sword::AttackEnd()
{

    Super::AttackEnd();
    // ������ ������ �ݸ��� ����
    MeleeCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWeapon_Sword::OnMeleeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	UE_LOG(LogTemp, Warning, TEXT("Sword Overlap Detected"));

    // 1. �������� ���Ͱ� ��ȿ�ϰ� �ڱ� �ڽ��� �ƴ��� Ȯ��
    if (OtherActor && OtherActor != this)
    {
        // 2. �������� ���͸� ���ϴ� Ŭ����(AMonsterAICharacter)�� ĳ����
        AMonsterAICharacter* Monster = Cast<AMonsterAICharacter>(OtherActor);

        // 3. ĳ���� ���� (��, ���� Ŭ������ ���)
        if (Monster)
        {
            // 4. �̹� �� ���ݿ��� ������ �������� Ȯ�� (�ߺ� Ÿ�� ����)
            if (!HitMonsters.Contains(Monster))
            {
                // 5. **���͸� ����:** ���͸� ����Ʈ�� �߰��ϰ� ���� ���� ���� ����
                HitMonsters.Add(Monster);

                /// ������ ���� �ε������� ����
                UE_LOG(LogTemp, Warning, TEXT("Hit Monster: %s"), *Monster->GetName());
                /// �� �Ʒ��� ���Ϳ��� ����� ������ ���� �߰�
            }
        }
    }

}
