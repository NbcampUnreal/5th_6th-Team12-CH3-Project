// Fill out your copyright notice in the Description page of Project Settings.


#include "StrUpItem.h"
#include "MainCharacter.h"

AStrUpItem::AStrUpItem()
{
	StrUpAmount = 30;
	Duration = 3;
	PlayerCharacter = nullptr;
	ItemType = "StrUp";
}

void AStrUpItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	if (IsValid(Actor)) //캐릭터가 존재하는지는 확인함 다만 캐릭터 이외에는 인식이 되지않도록 체크 해주어야할것같다
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("PlayerDamage Before BackUp : %d"), PlayerCharacter->getCharacterDamage());
			// 25.10.30. mpyi _ CharacterDamage 변수가 없어졌음으로 세터 게터를 이용해 베이스 대미지 변경으로 수정
			// 필요시 베이스 대미지가 아니라 mulDamage 수정으로 바꿔야 할 가능성 있음
			// PlayerCharacter->CharacterDamage += StrUpAmount;
			PlayerCharacter->setBaseDamage(PlayerCharacter->getBaseDamage() + StrUpAmount);
			UE_LOG(LogTemp, Display, TEXT("PlayerDamage After BackUp : %d"), PlayerCharacter->getCharacterDamage());

			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
			SetActorTickEnabled(false);


			GetWorld()->GetTimerManager().SetTimer(
				TimerHandle,
				this,
				&AStrUpItem::BackUpStr,
				Duration,
				false);
		}
	}
}

void AStrUpItem::BackUpStr()
{
	if (IsValid(PlayerCharacter))
	{
		UE_LOG(LogTemp, Display, TEXT("PlayerDamage Before BackUp : %d"), PlayerCharacter->getCharacterDamage());
		// 25.10.30. mpyi _ CharacterDamage 변수가 없어졌음으로 세터 게터를 이용해 베이스 대미지 변경으로 수정
		// 필요시 베이스 대미지가 아니라 mulDamage 수정으로 바꿔야 할 가능성 있음
		// PlayerCharacter->CharacterDamage -= StrUpAmount;
		PlayerCharacter->setBaseDamage(PlayerCharacter->getBaseDamage() - StrUpAmount);
		UE_LOG(LogTemp, Display, TEXT("PlayerDamage After BackUp : %d"), PlayerCharacter->getCharacterDamage());
	}
	Destroy();
}

AStrUpItem::~AStrUpItem()
{
}

