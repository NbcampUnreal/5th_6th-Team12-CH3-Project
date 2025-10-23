// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "MainCharacterHunter.generated.h"

struct FInputActionValue;

/**
 *
 */
UCLASS()
class TEAM_12_DESERT_API AMainCharacterHunter : public AMainCharacter
{
	GENERATED_BODY()

public:
	AMainCharacterHunter();

	virtual void BeginPlay() override;

	virtual void MeleeAttack() override;
	virtual void RangeAttack() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Hit(int32 Damage, AActor* ByWho) override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class USpringArmComponent> CameraBoom;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UCameraComponent> FollowCamera;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputAction> MoveInput;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputAction> LookInput;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputAction> JumpInput;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputAction> MeleeInput;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputAction> RangeInput;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputAction> DashInput;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	void MoveAction(const FInputActionValue& Value);
	void LookAction(const FInputActionValue& Value);
	void JumpAction(const FInputActionValue& Value);
	void DashStartAction(const FInputActionValue& Value);
	void DashEndAction(const FInputActionValue& Value);
	void MeleeAttackAction(const FInputActionValue& Value);
	void RangeAttackAction(const FInputActionValue& Value);


	/// 변수 Zone
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hunter_Property")
	float MaxDashSpeed = 1.5f;
	TObjectPtr<class UCharacterMovementComponent> MovementComponent;


private:
	float DefaultDashSpeed = 1.f;
	TObjectPtr<class APlayerController> PC; // 플레이어 컨트롤러


	/// 스태미너 만들기
};
