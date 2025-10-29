// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TEAM_12_DESERT_API IIItemInterface
{
	GENERATED_BODY()

	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	)=0;

	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;

public:

	virtual void ActivateItem(TObjectPtr<AActor> Actor) = 0;
	virtual void DeactivateItem(TObjectPtr<AActor> Actor) = 0;
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
};
