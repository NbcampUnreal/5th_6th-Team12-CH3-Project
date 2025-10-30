// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainCharacterAniminstance.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UMainCharacterAniminstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;



	UFUNCTION()
	void AnimNotify_Attack();

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<class AMainCharacter> MainCharacterRef;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<class UCharacterMovementComponent> CharacterMovementComp;

	UPROPERTY(BlueprintReadOnly)
	FRotator ControlRot;

	UPROPERTY(BlueprintReadOnly)
	FRotator ActorRot;

	UPROPERTY(BlueprintReadOnly)
	float speed;

	UPROPERTY(BlueprintReadOnly)
	int32 MeleeAttackCount;

	UPROPERTY(BlueprintReadOnly)
	int32 RangeAttackCount;

	UPROPERTY(BlueprintReadOnly)
	float DirectionForwardBackward;

	UPROPERTY(BlueprintReadOnly)
	float DirectionRightLeft;
	
};
