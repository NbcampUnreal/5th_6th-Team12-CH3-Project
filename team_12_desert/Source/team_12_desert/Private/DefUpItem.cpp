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
			// 25.10.30. mpyi _ characterArmor 변수가 없어졌음으로 세터 게터를 이용해 베이스 아머 변경으로 수정
			// 필요시 베이스 아머가 아니라 mulArmor 수정으로 바꿔야 할 가능성 있음
			// PlayerCharacter->CharacterArmor += DefAmount;
			PlayerCharacter->setBaseArmor(PlayerCharacter->getBaseArmor() + DefAmount);
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
		// 25.10.30. mpyi _ characterArmor 변수가 없어졌음으로 세터 게터를 이용해 베이스 아머 변경으로 수정
		// 필요시 베이스 아머가 아니라 mulArmor 수정으로 바꿔야 할 가능성 있음
		// PlayerCharacter->CharacterArmor -= DefAmount;
		PlayerCharacter->setBaseArmor(PlayerCharacter->getBaseArmor() - DefAmount);
		UE_LOG(LogTemp, Display, TEXT("PlayerDef After BackUp : %d"), PlayerCharacter->getCharacterArmor());
	}
	Destroy();
}
