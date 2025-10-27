// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CreatureMonser.generated.h"

UCLASS()
class TEAM_12_DESERT_API ACreatureMonster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACreatureMonster();

	void SetMovementSpeed(float NewSpeed);

	UPROPERTY(EditAnywhere, Category = "AI")
	float AttackRange = 20.0f;     //기본 공격 거리
	UPROPERTY(EditAnywhere, Category = "AI")
	float AttackCooldown = 1.0f;   //기본 공격 쿨타임 (초)
	UPROPERTY(EditAnywhere, Category = "AI")
	float WalkSpeed = 500.0f;                    //이동 속도
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
