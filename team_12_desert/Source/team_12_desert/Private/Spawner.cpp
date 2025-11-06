// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "MonsterAICharacter.h"
#include "MyGameState.h"
#include "MyGameInstance.h"
#include "Components/BoxComponent.h"

// Sets default values
ASpawner::ASpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 박스 컴포넌트를 생성하고, 이 액터의 루트로 설정
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	SpawningBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawningEnemy"));
	SpawningBox->SetupAttachment(Scene);


}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();

	if (!boss) {
		SpawnEnemy();
	}
}



void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!boss) {
		time += DeltaTime;
		UE_LOG(LogTemp, Warning, TEXT("%f"), time);

		if (time >= InfinityRespawnTime) {
			SpawnEnemy();
			time = 0;
		}
	}

	if (boss && Cast<AMyGameState>(GetWorld()->GetGameState())->IsFinsh()) {
		if (!bossSpawnd) {
			SpawnEnemy();
			bossSpawnd = true;
		}
	}
}

FVector ASpawner::GetRandomPointInVolume() const
{
	FVector BoxExtent = SpawningBox->GetScaledBoxExtent();
	// 2) 박스 중심 위치
	FVector BoxOrigin = SpawningBox->GetComponentLocation();

	// 3) 각 축별로 -Extent ~ +Extent 범위의 무작위 값 생성
	return BoxOrigin + FVector(
		FMath::FRandRange(-BoxExtent.X, BoxExtent.X),
		FMath::FRandRange(-BoxExtent.Y, BoxExtent.Y),
		FMath::FRandRange(-BoxExtent.Z, BoxExtent.Z)
	);
}

void ASpawner::SpawnEnemy()
{
	//if (!EnemyClass) return;


	TArray<FMonsterSpawnRow*> AllRows;
	static const FString ContextString(TEXT("MonsterSpawnContext"));
	SpawnDataTable->GetAllRows(ContextString, AllRows);

	UWorld* World = GetWorld();
	if (!World) return;

	for (FMonsterSpawnRow* Row : AllRows)
	{
		for (int i = 0; i < Row->SpawnCount; i++)
		{
			FVector SpawnLocation = GetRandomPointInVolume();
			FRotator SpawnRotation = FRotator::ZeroRotator;


			FHitResult HitResult;
			FVector Start = SpawnLocation;
			FVector End = Start - FVector(0, 0, 10000);

			FCollisionQueryParams TraceParams(FName(TEXT("GroundTrace")), false, this);

			//아래체크
			if (World->LineTraceSingleByChannel(
				HitResult,
				Start,
				End,
				ECC_WorldStatic,
				TraceParams
			))
			{
				SpawnLocation = HitResult.ImpactPoint;
			}

			bool bHit = World->LineTraceSingleByChannel(
				HitResult,
				Start,
				End,
				ECC_WorldStatic,
				TraceParams
			);	

			SpawnLocation.Z += 100.0f;

			AActor* Spawned = World->SpawnActor<AActor>(
				Row->MonsterClass,
				SpawnLocation,
				SpawnRotation
			);

			if (Spawned)
			{
				Cast<AMyGameState>(World->GetGameState())->AddMonsterCount(1);
			}
		}
	}
	Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateMonsterCountHud();
	//위 체크
	/*End = Start + FVector(0, 0, 10000);
	if (World->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECC_WorldStatic,
		TraceParams
	))
	{
		SpawnLocation = HitResult.ImpactPoint;
		UE_LOG(LogTemp, Warning, TEXT("Ceiling hit at: %s"), *SpawnLocation.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No ceiling found above spawn point"));
	}*/

	/*for (FMonsterSpawnRow* Row : AllRows)
	{
		for (int i = 0; i < Row->SpawnCount; i++) {
			GetWorld()->SpawnActor<AActor>(
				Row->MonsterClass,
				GetRandomPointInVolume(),
				FRotator::ZeroRotator
			);
			Cast<AMyGameState>(GetWorld()->GetGameState())->AddMonsterCount(1);
		}
	}

	Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateMonsterCountHud();*/


}


