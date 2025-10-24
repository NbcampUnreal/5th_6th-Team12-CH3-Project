// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonsterAICharacter.generated.h"

UCLASS()
class TEAM_12_DESERT_API AMonsterAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonsterAICharacter();

	void SetMovementSpeed(float NewSpeed);

	UPROPERTY(EditAnywhere, Category = "AI")
	float WalkSpeed = 300.0f;                    //이동 속도
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
