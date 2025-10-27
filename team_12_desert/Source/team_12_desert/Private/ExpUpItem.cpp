// Fill out your copyright notice in the Description page of Project Settings.


#include "ExpUpItem.h"
#include "MainCharacter.h"

AExpUpItem::AExpUpItem()
{
	ExpAmount = 100;
}

void AExpUpItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor))
	{
		if (TObjectPtr<AMainCharacter> PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("Player befor Level: %d, Exp : %d"), PlayerCharacter->getCurrentLevel(), PlayerCharacter->getCurrentExperience());
			PlayerCharacter->IncreaseExperience(ExpAmount);
			UE_LOG(LogTemp, Display, TEXT("Player befor Level: %d, Exp : %d"), PlayerCharacter->getCurrentLevel(), PlayerCharacter->getCurrentExperience());
		}
	}
	Destroy();
}

AExpUpItem::~AExpUpItem()
{
}
