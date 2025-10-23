// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DefaultGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API ADefaultGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ADefaultGameMode();

protected:
	virtual void BeginPlay() override;
	
};
