// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaItem.h"
#include "MainCharacter.h"

AStaminaItem::AStaminaItem()
{
	ItemType = "Stamina";
	StaminaAmount = 50; // �⺻ ���¹̳� ȸ����
}

void AStaminaItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor))
	{
		if (TObjectPtr<AMainCharacter> PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("Player Before Current: %d, Max : %d"), PlayerCharacter->getCurrentStamina(), PlayerCharacter->getMaxStamina());
			PlayerCharacter->HealStamina(StaminaAmount);
			UE_LOG(LogTemp, Display, TEXT("Player after Current: %d, Max : %d"), PlayerCharacter->getCurrentStamina(), PlayerCharacter->getMaxStamina());
		}
	}
	Destroy();
}

AStaminaItem::~AStaminaItem()
{
}
