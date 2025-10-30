// Fill out your copyright notice in the Description page of Project Settings.


#include "AItemBase.h"
#include "Components/SphereComponent.h"

// Sets default values
AAItemBase::AAItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	StaticMesh->SetupAttachment(Scene);

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Collision->SetupAttachment(Scene);

	Collision->OnComponentBeginOverlap.AddDynamic(this, &AAItemBase::OnItemOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &AAItemBase::OnItemEndOverlap);
}

void AAItemBase::OnItemOverlap(UPrimitiveComponent* OverlapPendComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(TEXT("Player"))) // ĳ���Ϳ� �±װ����� �޾Ƽ� ĳ���Ϳ��� �����ϵ��� ���� ����
	{
		ActivateItem(OtherActor);
	}
}

void AAItemBase::OnItemEndOverlap(
	UPrimitiveComponent* OverlapPendComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyInde)
{
	if (OtherActor && OtherActor->ActorHasTag(TEXT("Player"))) // ĳ���Ϳ� �±װ����� �޾Ƽ� ĳ���Ϳ��� �����ϵ��� ���� ����
	{
		DeactivateItem(OtherActor);
	}
}

void AAItemBase::ActivateItem(TObjectPtr<AActor> Actor)
{
}

void AAItemBase::DeactivateItem(TObjectPtr<AActor> Actor)
{
}

