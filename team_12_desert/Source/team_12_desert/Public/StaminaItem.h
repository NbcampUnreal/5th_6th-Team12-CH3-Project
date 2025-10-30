// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "StaminaItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AStaminaItem : public AAItemBase
{
	GENERATED_BODY()
public:
	AStaminaItem();

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;

	~AStaminaItem();
private:
	int32 StaminaAmount;
};
