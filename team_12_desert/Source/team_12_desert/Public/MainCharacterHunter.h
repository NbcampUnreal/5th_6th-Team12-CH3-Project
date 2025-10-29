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

	// ���� ������ Ȯ���ϴ� ���� (����� ������)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	bool bIsAttacking = false;

	// ����� �ִϸ��̼� ��Ÿ�� �ּ�
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


	/// ���� Zone
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hunter_Property")
	float MaxDashSpeed = 3.0f; // �뽬�� ������ �� ��� �ƽ� ���ǵ带 �ø�
	TObjectPtr<class UCharacterMovementComponent> MovementComponent;


	// ��Ÿ�� ����� ������ �� ȣ��� �Լ�
	UFUNCTION()
	void OnRangeAttackMontageFinished(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void OnMeleeAttackMontageFinished(UAnimMontage* Montage, bool bInterrupted);

	// �ִ� ��Ƽ���̿� �����Ͽ� ����ü�� �߻��� �Լ�
	// '����' ������ �̷�����°� �Ʒ� �� �Լ���!!!!!!
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ShootProjectile();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SlashSword();

private:
	float DefaultDashSpeed = 1.f;
	TObjectPtr<class APlayerController> PC; // �÷��̾� ��Ʈ�ѷ�



	/// ���¹̳� �����
	FTimerHandle StaminaTimerHandle;
	void ManageStamina();	// �뽬 �ϸ� �ʴ� 40�� ����, ���� ������ ȸ���� ����
	void StartStaminaDrainTimer();

	bool isDash = false;
};
