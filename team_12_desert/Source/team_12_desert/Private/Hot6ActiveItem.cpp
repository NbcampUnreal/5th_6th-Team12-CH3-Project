// Fill out your copyright notice in the Description page of Project Settings.


#include "Hot6ActiveItem.h"
#include "MainCharacter.h"

AHot6ActiveItem::AHot6ActiveItem()
{
	ItemID = FName("hot6");
	DamageBonus = 10;
}

void AHot6ActiveItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	Super::ActivateItem(Actor);
	if (Actor->ActorHasTag(TEXT("Player")))
	{
		MainCharacter = Cast<AMainCharacter>(Actor);
	}
}

void AHot6ActiveItem::Active()
{
	MainCharacter->setBaseDamage(MainCharacter->getBaseDamage() + DamageBonus);
}
