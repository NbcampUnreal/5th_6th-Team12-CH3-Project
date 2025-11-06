// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "MyGameInstance.h"
#include "Components/BoxComponent.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add(FName("Portal"));	

	Box = CreateDefaultSubobject<UBoxComponent>("Box");
}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &APortal::OnComponentBeginOverlap);
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APortal::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(FName("Player")))
	{
		Cast<UMyGameInstance>(GetGameInstance())->NextLevel();
	}
}

void APortal::SetPortalActive(bool bActive)
{
	SetActorHiddenInGame(!bActive); 

	if (Box)
	{
		Box->SetCollisionEnabled(bActive ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
	}
}