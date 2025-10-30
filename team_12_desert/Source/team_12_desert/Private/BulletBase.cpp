// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MainCharacter.h"
#include "Components/BoxComponent.h"
#include "Monster.h"
#include "WeaponBase.h"

// Sets default values
ABulletBase::ABulletBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));

	RootComponent = StaticMeshComp;

	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	ProjectileMovementComp->SetUpdatedComponent(StaticMeshComp);
	ProjectileMovementComp->InitialSpeed = BulletSpeed;
	ProjectileMovementComp->MaxSpeed = BulletSpeed;
	/// ����ü �ӵ��� ���⼭ �������� ����
	/// �������Ʈ�� �߻�ü -> �ʱ�ӵ�, �ִ�ӵ��� ������ ��(�װ� �� ���뼺 ����)


	StaticMeshComp->OnComponentHit.AddDynamic(this, &ABulletBase::OnHit);


	/// �Ѿ��� �ƹ��͵� ���� ���� ä �����ߴٸ� 3�� �ڿ� �����ǵ���
	SetLifeSpan(3.0f);
}

// Called when the game starts or when spawned
void ABulletBase::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ABulletBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABulletBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	
	auto getname = OtherActor->GetName();
	// UE_LOG(LogTemp, Warning, TEXT("Bullet hit: %s"), *getname);
	
	AMonster* HitMonster = Cast<AMonster>(OtherActor);
	AActor* Actor = GetOwner();
	if (!IsValid(Actor))
	{
		return;
	}
	AMainCharacter* GunOwner = Cast<AMainCharacter>(Actor->GetOwner());
	AWeaponBase* Gun = Cast<AWeaponBase>(Actor);
	if (!IsValid(GunOwner))
	{
		return;
	}
	if (!IsValid(Gun))
	{
		return;
	}
	if (IsValid(HitMonster))
	{
		int32 damage = (GunOwner->getBaseDamage() + Gun->WeaponDamage) * GunOwner->getMulDamage();
		UE_LOG(LogTemp, Warning, TEXT("Weapon Owner: %s, Damage: %d"), *GunOwner->GetName(), damage);

		HitMonster->ApplyDamage(damage);
	}

	this->Destroy();
}

//void ABulletBase::OnBulletOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Bullet Hit MainCharacter"));
//
//	this->Destroy();
//}

