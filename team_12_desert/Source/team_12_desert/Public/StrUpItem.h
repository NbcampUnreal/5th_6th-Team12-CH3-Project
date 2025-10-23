// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "StrUpItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AStrUpItem : public AAItemBase
{
	GENERATED_BODY()
	
public:
	AStrUpItem();

	virtual void ActivateItem(TObjectPtr<AActor> Actor);

private:
	int32 StrupAmount;
	float Duration;

	FTimerHandle TimerHandle;

	TObjectPtr<class AMainCharacter> PlayerCharacter;

	void BackUpStr();

	~AStrUpItem();
};
