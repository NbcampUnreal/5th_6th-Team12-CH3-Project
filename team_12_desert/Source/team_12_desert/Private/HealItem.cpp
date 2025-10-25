// Fill out your copyright notice in the Description page of Project Settings.


#include "HealItem.h"
#include "MainCharacter.h"

AHealItem::AHealItem()
{
	HealAmount = 30;
}

void AHealItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor))
	{
		if (TObjectPtr<AMainCharacter> PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("PlayerHp be : %d"),PlayerCharacter->getCurrentHP());
			PlayerCharacter->HealHP(HealAmount);
			UE_LOG(LogTemp, Display, TEXT("PlayerHp After : %d"), PlayerCharacter->getCurrentHP());
		}
	}
	Destroy();
}

AHealItem::~AHealItem()
{

}
