// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterHunter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "WeaponBase.h"
#include "Animation/AnimMontage.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"

AMainCharacterHunter::AMainCharacterHunter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bUsePawnControlRotation = true; // �� ���� ȸ�� True


	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);


	/// �𸮾� ���� �θ� Character�� max �ӵ��� ����(BP���� ���� ���� �⺻ 600)
	MovementComponent = GetCharacterMovement();
	if (MovementComponent)
	{
		DefaultDashSpeed = MovementComponent->MaxWalkSpeed;
	}

}

void AMainCharacterHunter::BeginPlay()
{
	Super::BeginPlay();

	PC = Cast<APlayerController>(GetController());
	if (IsValid(PC))
	{
		ULocalPlayer* Player = PC->GetLocalPlayer();
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Player))
		{
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}


	// ���¹̳� ���� �ý��� ����
	StartStaminaDrainTimer();

}

void AMainCharacterHunter::MeleeAttack()
{
	Super::MeleeAttack();
	// 251023_mpyi_���� ����
}

void AMainCharacterHunter::RangeAttack()
{
	Super::RangeAttack();
	// 251023_mpyi_���� ����
}

void AMainCharacterHunter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveInput, ETriggerEvent::Triggered, this, &AMainCharacterHunter::MoveAction);
		EnhancedInputComponent->BindAction(LookInput, ETriggerEvent::Triggered, this, &AMainCharacterHunter::LookAction);
		EnhancedInputComponent->BindAction(JumpInput, ETriggerEvent::Triggered, this, &AMainCharacterHunter::JumpAction);
		EnhancedInputComponent->BindAction(MeleeInput, ETriggerEvent::Triggered, this, &AMainCharacterHunter::MeleeAttackAction);
		EnhancedInputComponent->BindAction(RangeInput, ETriggerEvent::Triggered, this, &AMainCharacterHunter::RangeAttackAction);
		EnhancedInputComponent->BindAction(DashInput, ETriggerEvent::Started, this, &AMainCharacterHunter::DashStartAction);
		EnhancedInputComponent->BindAction(DashInput, ETriggerEvent::Completed, this, &AMainCharacterHunter::DashEndAction);
	}
}

void AMainCharacterHunter::Hit(int32 Damage, AActor* ByWho)
{
	Super::Hit(Damage, ByWho);

	if (CurrentHP > 0)
	{
		return;
	}

	/// 251023_mpyi)�ڼ��� ��Ʈ, ���� ������ ���� ����	
	Destroy();

}

// �⺻ wasd �̵�
void AMainCharacterHunter::MoveAction(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddMovementInput(GetActorForwardVector(), MovementVector.X);
		AddMovementInput(GetActorRightVector(), MovementVector.Y);
	}
}

// �⺻ mouse ���� �̵�, ���ϰ��� clamp�� ���� ���� ���� ���� ����
void AMainCharacterHunter::LookAction(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMainCharacterHunter::JumpAction(const FInputActionValue& Value)
{
	Jump();
}

// �뽬 ���۽� �̵��ӵ� ���� �⺻�� 1.5��(BP���� ��������)
void AMainCharacterHunter::DashStartAction(const FInputActionValue& Value)
{
	if(CurrentStamina <= 20) // ���¹̳� 20 �����϶� �뽬 �Ұ�
	{
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Dash Start"));
	MovementComponent->MaxWalkSpeed = DefaultDashSpeed * MaxDashSpeed;
	
	isDash = true;
}

void AMainCharacterHunter::DashEndAction(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Dash End"));
	MovementComponent->MaxWalkSpeed = DefaultDashSpeed;

	isDash = false;
}

// ���� ����
void AMainCharacterHunter::MeleeAttackAction(const FInputActionValue& Value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Melee Attack"));

	//this->MeleeAttack();
	//if (IsValid(MeleeWeaponActor))
	//	MeleeWeaponActor->Attack();

	// �̹� ���� ���̶�� �Լ��� �ٷ� �����Ͽ� ������� ����
	if (bIsAttacking)
	{
		return;
	}

	// ����� ��Ÿ�ְ� ��ȿ�ϰ�, ��Ÿ�ְ� �����Ǿ� �ִ��� Ȯ��
	if (IsValid(MeleeAttackMontage) && IsValid(GetMesh()))
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (IsValid(AnimInstance))
		{
			float Duration = AnimInstance->Montage_Play(MeleeAttackMontage, 1.0f); // 2.0f�� �ؼ� �ӵ� �ι� ������
			UE_LOG(LogTemp, Warning, TEXT("Attack Montage Played. Duration: %f"), Duration);
			if (Duration > 0.0f)
			{
				bIsAttacking = true; // ���� ����, �÷��� ����

				if (IsValid(MeleeWeaponActor))
					MeleeWeaponActor->Attack();


				// ��Ÿ�� ����� ������ �� ȣ��� ��������Ʈ ���ε�
				FOnMontageEnded MontageDelegate;
				MontageDelegate.BindUObject(this, &AMainCharacterHunter::OnRangeAttackMontageFinished);
				AnimInstance->Montage_SetEndDelegate(MontageDelegate, MeleeAttackMontage);
			}
		}
	}

}

void AMainCharacterHunter::RangeAttackAction(const FInputActionValue& Value)
{
	// UE_LOG(LogTemp, Warning, TEXT("Range Attack"));

	//this->RangeAttack();
	//if (IsValid(RangeWeaponActor))
	//	RangeWeaponActor->Attack();


	// �̹� ���� ���̶�� �Լ��� �ٷ� �����Ͽ� ������� ����
	if (bIsAttacking)
	{
		return;
	}

	// ����� ��Ÿ�ְ� ��ȿ�ϰ�, ��Ÿ�ְ� �����Ǿ� �ִ��� Ȯ��
	if (IsValid(RangeAttackMontage) && IsValid(GetMesh()))
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (IsValid(AnimInstance))
		{
			float Duration = AnimInstance->Montage_Play(RangeAttackMontage, 2.0f); // 2.0f�� �ؼ� �ӵ� �ι� ������
			UE_LOG(LogTemp, Warning, TEXT("Attack Montage Played. Duration: %f"), Duration);
			if (Duration > 0.0f)
			{
				bIsAttacking = true; // ���� ����, �÷��� ����

				// ��Ÿ�� ����� ������ �� ȣ��� ��������Ʈ ���ε�
				FOnMontageEnded MontageDelegate;
				MontageDelegate.BindUObject(this, &AMainCharacterHunter::OnRangeAttackMontageFinished);
				AnimInstance->Montage_SetEndDelegate(MontageDelegate, RangeAttackMontage);
			}
		}
	}
}

void AMainCharacterHunter::OnRangeAttackMontageFinished(UAnimMontage* Montage, bool bInterrupted)
{
	// ��Ÿ�� ����� �������Ƿ�, ���� ���� ���·� ����
	bIsAttacking = false;
	UE_LOG(LogTemp, Warning, TEXT("Attack Montage Finished."));
}

void AMainCharacterHunter::OnMeleeAttackMontageFinished(UAnimMontage* Montage, bool bInterrupted)
{
	// ��Ÿ�� ����� �������Ƿ�, ���� ���� ���·� ����
	bIsAttacking = false;

	if (IsValid(MeleeWeaponActor))
		MeleeWeaponActor->AttackEnd();

	UE_LOG(LogTemp, Warning, TEXT("Attack Montage Finished."));
}

void AMainCharacterHunter::ShootProjectile()
{
	this->RangeAttack();
	if (IsValid(RangeWeaponActor))
		RangeWeaponActor->Attack();

}

void AMainCharacterHunter::SlashSword()
{
}



void AMainCharacterHunter::ManageStamina()
{
	// UE_LOG(LogTemp, Warning, TEXT("Managing Stamina. isDash: %s, CurrentStamina: %d"), isDash ? TEXT("true") : TEXT("false"), CurrentStamina);
	if (isDash)
	{
		this->CurrentStamina -= 8;
		if (CurrentStamina < 0)
		{
			CurrentStamina = 0;
			DashEndAction(0); // ���¹̳ʰ� 0�� �Ǹ� �뽬 ����
		}
	}
	else
	{
		/// �̹� ���¹̳� full�̸� ����
		if (CurrentStamina >= MaxStamina) return;

		this->CurrentStamina += 4;
		if (CurrentStamina > MaxStamina)
		{
			CurrentStamina = MaxStamina;
		}
	}
}

void AMainCharacterHunter::StartStaminaDrainTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			StaminaTimerHandle,
			this,
			&AMainCharacterHunter::ManageStamina,   // ȣ���� �Լ�
			0.2f,                               // �ð� ���� (0.2��)
			true                                // �ݺ� ���� (�ݺ�)
		);

		UE_LOG(LogTemp, Warning, TEXT("Stamina Drain Timer Started."));
	}
}
