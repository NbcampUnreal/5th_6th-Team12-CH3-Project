// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MainCharacter.h"

// Sets default values
ABulletBase::ABulletBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	RootComponent = StaticMeshComp;

	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	ProjectileMovementComp->SetUpdatedComponent(StaticMeshComp);

	/// ����ü �ӵ��� ���⼭ �������� ����
	/// �������Ʈ�� �߻�ü -> �ʱ�ӵ�, �ִ�ӵ��� ������ ��(�װ� �� ���뼺 ����)

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
	AMainCharacter* MC = Cast<AMainCharacter>(OtherActor);
	AActor* Actor = GetOwner();
	if (!IsValid(Actor))
	{
		return;
	}
	AMainCharacter* GunOwner = Cast<AMainCharacter>(Actor->GetOwner());
	if (!IsValid(GunOwner))
	{
		return;
	}
	if (IsValid(MC))
	{
		MC->Hit(GunOwner->getCharacterDamage(), GunOwner);
	}

}

