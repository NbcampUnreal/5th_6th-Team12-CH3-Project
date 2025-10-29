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
	MeleeCollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore); // 모든 채널 무시
	MeleeCollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap); // Pawn 채널과 오버랩 감지
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
    // 공격이 끝나면 콜리전 없앰
    MeleeCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWeapon_Sword::OnMeleeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	UE_LOG(LogTemp, Warning, TEXT("Sword Overlap Detected"));

    // 1. 오버랩된 액터가 유효하고 자기 자신이 아닌지 확인
    if (OtherActor && OtherActor != this)
    {
        // 2. 오버랩된 액터를 원하는 클래스(AMonsterAICharacter)로 캐스팅
        AMonsterAICharacter* Monster = Cast<AMonsterAICharacter>(OtherActor);

        // 3. 캐스팅 성공 (즉, 몬스터 클래스인 경우)
        if (Monster)
        {
            // 4. 이미 이 공격에서 감지된 몬스터인지 확인 (중복 타격 방지)
            if (!HitMonsters.Contains(Monster))
            {
                // 5. **필터링 성공:** 몬스터를 리스트에 추가하고 변수 저장 로직 수행
                HitMonsters.Add(Monster);

                /// 디버깅용 누가 부딪혔는지 찍음
                UE_LOG(LogTemp, Warning, TEXT("Hit Monster: %s"), *Monster->GetName());
                /// 이 아래로 몬스터에게 대미지 입히는 로직 추가
            }
        }
    }

}
