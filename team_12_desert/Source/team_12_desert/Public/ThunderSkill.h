// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "ThunderSkill.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AThunderSkill : public ASkillBase
{
	GENERATED_BODY()
public:
	AThunderSkill();

	virtual void ActionSkill(TArray<AActor*> Actors, float time, FVector Location) override;
};
