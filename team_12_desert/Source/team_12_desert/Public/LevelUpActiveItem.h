// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActiveItemBase.h"
#include "LevelUpActiveItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API ALevelUpActiveItem : public AActiveItemBase
{
	GENERATED_BODY()
public:
	ALevelUpActiveItem();
	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void Active()override;
};
