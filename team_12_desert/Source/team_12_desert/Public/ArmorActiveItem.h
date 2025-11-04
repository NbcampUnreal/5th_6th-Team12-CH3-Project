// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveItemBase.h"
#include "ArmorActiveItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AArmorActiveItem : public AActiveItemBase
{
	GENERATED_BODY()
	int32 ArmorBonus;
public:
	AArmorActiveItem();
	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void Active()override;
};
