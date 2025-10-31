// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "DefMultiplySkill.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API ADefMultiplySkill : public ASkillBase
{
	GENERATED_BODY()
	float DefIncreaseValue;
public:
	ADefMultiplySkill();
	virtual void AttachSkill(TObjectPtr<class AMainCharacter> Character) override;
	virtual void DetachSkill(TObjectPtr<class AMainCharacter> Character) override;
};
