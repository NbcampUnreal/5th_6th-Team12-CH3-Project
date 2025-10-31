// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "MyGameState.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance()
{
	UE_LOG(LogTemp, Warning, TEXT("MyGameInsta"));
	CurrentLevelIndex = 0;
		

}

void UMyGameInstance::PlayerStatSave()
{
}

void UMyGameInstance::PlayerStatLoad()
{
}

void UMyGameInstance::NextLevel()
{
	MonsterCount = 0;
	CurrentLevelIndex++;
	PlayerStatSave();
	UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);

}

