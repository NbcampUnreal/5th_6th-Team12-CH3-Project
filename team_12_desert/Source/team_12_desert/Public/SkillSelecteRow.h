// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "SkillBase.h"
#include "SkillSelecteRow.generated.h"

USTRUCT(BlueprintType)
struct FSkillSelecteRow : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)

	FString SkillName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<ASkillBase> SkillClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Chance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SkillExplanation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* SkillImage;
};
