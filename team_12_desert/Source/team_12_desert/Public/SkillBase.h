// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkillBase.generated.h"


UCLASS()
class TEAM_12_DESERT_API ASkillBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASkillBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	TObjectPtr<USceneComponent> Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect")
	TObjectPtr<class UNiagaraSystem> NiagaraEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delay")
	float Delay;

	virtual void ActionSkill(TArray<AActor*> Actors, float time, FVector Location);
};
	