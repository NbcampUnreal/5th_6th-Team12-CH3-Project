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

	// 공격 중인지 확인하는 변수 (재공격 방지용)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	bool bIsAttacking = false;

	// 재생할 애니메이션 몽타주 애셋
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	TObjectPtr<class UAnimMontage> RangeAttackMontage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	TObjectPtr<class UAnimMontage> MeleeAttackMontage;

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
	float MaxDashSpeed = 3.0f; // 대쉬에 제약을 건 대신 맥스 스피드를 올림
	TObjectPtr<class UCharacterMovementComponent> MovementComponent;


	// 몽타주 재생이 끝났을 때 호출될 함수
	UFUNCTION()
	void OnRangeAttackMontageFinished(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void OnMeleeAttackMontageFinished(UAnimMontage* Montage, bool bInterrupted);

	// 애님 노티파이에 연결하여 투사체를 발사할 함수
	// '실제' 공격이 이루어지는건 아래 두 함수다!!!!!!
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ShootProjectile();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SlashSword();

private:
	float DefaultDashSpeed = 1.f;
	TObjectPtr<class APlayerController> PC; // 플레이어 컨트롤러



	/// 스태미너 만들기
	FTimerHandle StaminaTimerHandle;
	void ManageStamina();	// 대쉬 하면 초당 40씩 깎임, 가만 있으면 회복을 관리
	void StartStaminaDrainTimer();

	bool isDash = false;
};
