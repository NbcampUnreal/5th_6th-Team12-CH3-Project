// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaItem.h"
#include "MainCharacter.h"

AStaminaItem::AStaminaItem()
{
	ItemType = "Stamina";
}

void AStaminaItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor))
	{
		if (TObjectPtr<AMainCharacter> PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("Player befor Current: %d, Max : %d"), PlayerCharacter->getCurrentStamina(), PlayerCharacter->getMaxStamina());
			PlayerCharacter->HealStamina(PlayerCharacter->getMaxStamina());
			UE_LOG(LogTemp, Display, TEXT("Player befor Current: %d, Max : %d"), PlayerCharacter->getCurrentStamina(), PlayerCharacter->getMaxStamina());
		}
	}
	Destroy();
}

AStaminaItem::~AStaminaItem()
{
}
