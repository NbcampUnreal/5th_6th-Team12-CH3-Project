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
}

void AAItemBase::OnItemOverlap(UPrimitiveComponent* OverlapPendComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor) // 캐릭터에 태그같은걸 달아서 캐릭터에만 반응하도록 추후 변경
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
}

void AAItemBase::ActivateItem(TObjectPtr<AActor> Actor)
{
}

