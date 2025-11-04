// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveItemBase.h"
#include "Hot6ActiveItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AHot6ActiveItem : public AActiveItemBase
{
	GENERATED_BODY()
	int32 DamageBonus;
public:
	AHot6ActiveItem();
	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void Active()override;
};
