// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"
#include "Spawner.h"
#include "MonsterAICharacter.h"

#include "EnhancedInputComponent.h"
#include "GameFramework/PlayerController.h"

#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

AMyGameState::AMyGameState()
{
	UE_LOG(LogTemp, Warning, TEXT("Start"));
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

//�����ٲ𶧸��� ȣ��
void AMyGameState::BeginPlay()
{
	Super::BeginPlay();
	
	//Cast<UMyGameInstance>(GetGameInstance())->SetLevelMap(LevelMapNames);


	//�÷��̾� ���� �ε� �Լ�ȣ��
}
void AMyGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Cast<UMyGameInstance>(GetGameInstance())->GetMonsterCount()==0) {
		//Cast<UMyGameInstance>(GetGameInstance())->NextLevel();
	}

}

void AMyGameState::StartLevel()
{

	//TArray<AActor*> FoundVolumes;
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawner::StaticClass(), FoundVolumes);

	//const int32 ItemToSpawn = 40;

	//for (int32 i = 0; i < ItemToSpawn; i++)
	//{
	//	if (FoundVolumes.Num() > 0)
	//	{
	//		ASpawner* SpawnVolume = Cast<ASpawner>(FoundVolumes[0]);
	//		if (SpawnVolume)
	//		{
	//			SpawnVolume->SpawnEnemy(AMonsterAICharacter::StaticClass(), 20);

	//			MonsterCount++;
	//		}
	//	}
	//}
}

void AMyGameState::OnLevelTimeUp()
{
}



//void AMyGameState::OnCoinCollected()
//{
//	CollectedCoinCount++;
//
//	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
//		CollectedCoinCount,
//		SpawnedCoinCount)
//
//		// ���� �������� ������ ������ ���� �ֿ��ٸ� ��� ���� ����
//		if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
//		{
//			EndLevel();
//		}
//}


void AMyGameState::LevelTest()
{
}
