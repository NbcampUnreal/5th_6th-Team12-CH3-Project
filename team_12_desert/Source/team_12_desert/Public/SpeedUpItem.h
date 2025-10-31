// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "SpeedUpItem.generated.h"

/**
 * 
 */
 //폐기된 아이템입니다.  사용하지마세요
UCLASS()
class TEAM_12_DESERT_API ASpeedUpItem : public AAItemBase
{
	GENERATED_BODY()

	FTimerHandle TimerHandle;

	TObjectPtr<class AMainCharacter> PlayerCharacter;

	float Duration;

	void BackUpSpeed();

public:
	ASpeedUpItem();

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	~ASpeedUpItem();
};
