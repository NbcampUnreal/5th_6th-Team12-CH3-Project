// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmorActiveItem.h"
#include "MainCharacter.h"

AArmorActiveItem::AArmorActiveItem()
{
	ItemID = "Armor";
	ArmorBonus = 10;
}

void AArmorActiveItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	Super::ActivateItem(Actor);
	if (Actor->ActorHasTag(TEXT("Player")))
	{
		MainCharacter = Cast<AMainCharacter>(Actor);
	}
}

void AArmorActiveItem::Active()
{
	MainCharacter->setBaseDamage(MainCharacter->getBaseArmor() + ArmorBonus);
}
