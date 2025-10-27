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

	virtual void ActivateItem(TObjectPtr<AActor> Actor)override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float Duration;
private:
	int32 StrupAmount;


	FTimerHandle TimerHandle;

	TObjectPtr<class AMainCharacter> PlayerCharacter;

	void BackUpStr();

	~AStrUpItem();
};
