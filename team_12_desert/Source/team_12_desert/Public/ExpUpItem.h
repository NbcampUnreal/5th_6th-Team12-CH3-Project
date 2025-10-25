// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "ExpUpItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AExpUpItem : public AAItemBase
{
	GENERATED_BODY()
	
public:
	AExpUpItem();

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;

	~AExpUpItem();

private:
	int32 ExpAmount;
};
