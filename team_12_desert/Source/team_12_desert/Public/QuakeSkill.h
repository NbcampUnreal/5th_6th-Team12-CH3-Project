// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "QuakeSkill.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AQuakeSkill : public ASkillBase
{
	GENERATED_BODY()
public:
	AQuakeSkill();

	virtual void ActionSkill(TArray<AActor*> Actors, float time, FVector Location) override;

};
