// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelUpActiveItem.h"
#include "MainCharacter.h"

ALevelUpActiveItem::ALevelUpActiveItem()
{
	ItemID = "LevelUpItem";
}

void ALevelUpActiveItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	Super::ActivateItem(Actor);
}

void ALevelUpActiveItem::Active()
{
	if (MainCharacter->ActorHasTag(TEXT("Player")))
	{
		MainCharacter->IncreaseExperience(100);
	}
}

