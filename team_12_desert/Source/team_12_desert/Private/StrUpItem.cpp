// Fill out your copyright notice in the Description page of Project Settings.


#include "StrUpItem.h"
#include "MainCharacter.h"

AStrUpItem::AStrUpItem()
{
	StrupAmount = 30;
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
			UE_LOG(LogTemp, Display, TEXT("characteroverlap"));

			// PlayerCharacter-> 추후 공격력에 접근이 가능하도록 수정요청 하기
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
		UE_LOG(LogTemp, Display, TEXT("BackUpStr"));
		// ToDo : 공격력을 원복하는 로직 작성
	}
	Destroy();
}

AStrUpItem::~AStrUpItem()
{
}

