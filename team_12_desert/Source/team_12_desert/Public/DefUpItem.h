// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "DefUpItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API ADefUpItem : public AAItemBase
{
	GENERATED_BODY()
public:
	ADefUpItem();

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;

	~ADefUpItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float Duration;
private:
	int32 DefAmount;
	FTimerHandle TimerHandle;

	TObjectPtr<class AMainCharacter> PlayerCharacter;

	void BackUpDef();
};
