// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "MonsterAICharacter.h"
#include "MyGameState.h"
#include "MyGameInstance.h"
#include "Components/BoxComponent.h"
#include "ObjectPoolSubsystem.h" 
#include "Monster.h"
#include "Engine/GameInstance.h" 
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

	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		PoolSubsystem = GameInstance->GetSubsystem<UObjectPoolSubsystem>();
	}

	// 풀 예열
	PrewarmMonsterPools();

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
			
			bossSpawnd = true;
			SpawnEnemy();
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


	
	// 풀 서브시스템이 없으면 스폰 불가
	if (!PoolSubsystem)
	{
		UE_LOG(LogTemp, Error, TEXT("PoolSubsystem is not valid!"));
		return;
	}

	//if (!EnemyClass) return; // 이 부분은 데이터 테이블을 쓰므로 필요 없어 보임

	TArray<FMonsterSpawnRow*> AllRows;
	static const FString ContextString(TEXT("MonsterSpawnContext"));
	SpawnDataTable->GetAllRows(ContextString, AllRows);

	UWorld* World = GetWorld();
	if (!World) return;

	for (FMonsterSpawnRow* Row : AllRows)
	{
		// AMonster 클래스가 아니면 스킵
		if (!Row || !Row->MonsterClass || !Row->MonsterClass->IsChildOf(AMonster::StaticClass()))
		{
			continue;
		}

		// TSubclassOf<AActor>를 TSubclassOf<AMonster>로 캐스팅
		TSubclassOf<AMonster> MonsterClass = TSubclassOf<AMonster>(*Row->MonsterClass);

		for (int i = 0; i < Row->SpawnCount; i++)
		{
			FVector SpawnLocation = GetRandomPointInVolume();
			FRotator SpawnRotation = FRotator::ZeroRotator;

			// ... (지형 체크 로직은 동일) ...
			FHitResult HitResult;
			FVector Start = SpawnLocation;
			FVector End = Start - FVector(0, 0, 10000);
			FCollisionQueryParams TraceParams(FName(TEXT("GroundTrace")), false, this);

			if (World->LineTraceSingleByChannel(HitResult, Start, End, ECC_WorldStatic, TraceParams))
			{
				SpawnLocation = HitResult.ImpactPoint;
			}
			SpawnLocation.Z += 100.0f; // 지형 위에 살짝 띄우기

			// *** 핵심 변경: World->SpawnActor 대신 PoolSubsystem->GetMonster 사용 ***
			AMonster* SpawnedMonster = PoolSubsystem->GetMonster(
				MonsterClass,
				SpawnLocation,
				SpawnRotation
			);

			if (SpawnedMonster)
			{
				Cast<AMyGameState>(World->GetGameState())->AddMonsterCount(1);
			}
		}
	}
	Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateMonsterCountHud();

}

void ASpawner::PrewarmMonsterPools()
{
	if (!PoolSubsystem || !SpawnDataTable) return;

	TArray<FMonsterSpawnRow*> AllRows;
	static const FString ContextString(TEXT("MonsterSpawnContext"));
	SpawnDataTable->GetAllRows(ContextString, AllRows);

	for (FMonsterSpawnRow* Row : AllRows)
	{
		if (Row && Row->MonsterClass)
		{
			// AMonster를 상속받았는지 확인 (안전 장치)
			if (Row->MonsterClass->IsChildOf(AMonster::StaticClass()))
			{
				// TSubclassOf<AActor>를 TSubclassOf<AMonster>로 캐스팅
				TSubclassOf<AMonster> MonsterClass = TSubclassOf<AMonster>(*Row->MonsterClass);

				// 해당 몬스터 타입에 대해 (Row->SpawnCount * 여유분) 만큼 미리 생성
				// Infinity 모드라면 더 많이 생성해야 할 수 있습니다.
				// 여기서는 InitialPoolSize를 사용합니다.
				int32 CountToWarm = Infinity ? InitialPoolSize : Row->SpawnCount;

				PoolSubsystem->PrewarmPool(MonsterClass, CountToWarm);
			}
		}
	}
}


