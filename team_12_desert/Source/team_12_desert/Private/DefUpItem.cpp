// Fill out your copyright notice in the Description page of Project Settings.


#include "DefUpItem.h"
#include "MainCharacter.h"

ADefUpItem::ADefUpItem()
{
	DefAmount = 30;
	ItemType = "DefUp";
	PlayerCharacter = nullptr;
}

void ADefUpItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	if (IsValid(Actor))
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("PlayerDef Before : %d"), PlayerCharacter->getCharacterArmor());
			PlayerCharacter->CharacterArmor += DefAmount;
			UE_LOG(LogTemp, Display, TEXT("PlayerDef After : %d"), PlayerCharacter->getCharacterArmor());
			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
			SetActorTickEnabled(false);

			GetWorld()->GetTimerManager().SetTimer(
				TimerHandle,
				this,
				&ADefUpItem::BackUpDef,
				Duration,
				false);
		}
	}
}


ADefUpItem::~ADefUpItem()
{
}

void ADefUpItem::BackUpDef()
{
	if (IsValid(PlayerCharacter))
	{
		UE_LOG(LogTemp, Display, TEXT("PlayerDef Before : %d"), PlayerCharacter->getCharacterArmor());
		PlayerCharacter->CharacterArmor -= DefAmount;
		UE_LOG(LogTemp, Display, TEXT("PlayerDef After BackUp : %d"), PlayerCharacter->getCharacterArmor());
	}
	Destroy();
}
