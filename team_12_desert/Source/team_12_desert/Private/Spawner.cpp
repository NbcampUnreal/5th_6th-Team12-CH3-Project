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

	// �ڽ� ������Ʈ�� �����ϰ�, �� ������ ��Ʈ�� ����
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	SpawningBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawningEnemy"));
	SpawningBox->SetupAttachment(Scene);

}

void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Infinity) {
		time += DeltaTime;

		if (time >= InfinityRespawnTime) {
			SpawnEnemy();
			time = 0;
		}
	}	
}

FVector ASpawner::GetRandomPointInVolume() const
{
	FVector BoxExtent = SpawningBox->GetScaledBoxExtent();
	// 2) �ڽ� �߽� ��ġ
	FVector BoxOrigin = SpawningBox->GetComponentLocation();

	// 3) �� �ະ�� -Extent ~ +Extent ������ ������ �� ����
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

	for (FMonsterSpawnRow* Row : AllRows)
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
	Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateHud();


}


