// Fill out your copyright notice in the Description page of Project Settings.


#include "DefUpItem.h"
#include "MainCharacter.h"

ADefUpItem::ADefUpItem()
{
	DefAmount = 30;
	ItemType = "DefUp";
}

void ADefUpItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	//UE_LOG(LogTemp, Display, TEXT("overlap"));
	//if (IsValid(Actor))
	//{
	//	if (TObjectPtr<AMainCharacter> PlayerCharacter = Cast<AMainCharacter>(Actor))
	//	{
	//		UE_LOG(LogTemp, Display, TEXT("PlayerHp be : %d"), PlayerCharacter->getCurrentHP());
	//		PlayerCharacter->HealHP(DefAmount);
	//		UE_LOG(LogTemp, Display, TEXT("PlayerHp After : %d"), PlayerCharacter->getCurrentHP());
	//	}
	//}
	//Destroy();
}


ADefUpItem::~ADefUpItem()
{
}
