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
	if (IsValid(Actor)) //ĳ���Ͱ� �����ϴ����� Ȯ���� �ٸ� ĳ���� �̿ܿ��� �ν��� �����ʵ��� üũ ���־���ҰͰ���
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("characteroverlap"));

			// PlayerCharacter-> ���� ���ݷ¿� ������ �����ϵ��� ������û �ϱ�
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
		// ToDo : ���ݷ��� �����ϴ� ���� �ۼ�
	}
	Destroy();
}

AStrUpItem::~AStrUpItem()
{
}

