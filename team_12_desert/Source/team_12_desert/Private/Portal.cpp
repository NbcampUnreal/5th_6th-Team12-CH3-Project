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

	//UE_LOG(LogTemp, Warning, TEXT("%s "),*temp);

}

void APortal::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(FName("Player")))
	{
		auto GI = Cast<UMyGameInstance>(GetGameInstance());
		GI->SetLevelTime(NextLevelTime);

		FName LevelName = NAME_None;

		if (NextLevel.IsValid())
		{
			LevelName = NextLevel->GetFName();
		}
		else
		{
			FStringAssetReference Ref = NextLevel.ToSoftObjectPath();
			LevelName = FName(*Ref.GetAssetName());
		}

		if (LevelName != NAME_None)
		{
			GI->NextLevel(LevelName);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("NextLevel is invalid in APortal!"));
		}
	}
}

void APortal::SetPortalActive(bool bActive)
{

	if (IsProlouge) {
		Box->SetCollisionEnabled(IsProlouge ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
		SetActorHiddenInGame(!IsProlouge);

	}
	else if(Box)
	{
		SetActorHiddenInGame(!bActive);

		Box->SetCollisionEnabled(bActive ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
	}


}