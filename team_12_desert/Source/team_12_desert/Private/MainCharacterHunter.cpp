// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterHunter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "WeaponBase.h"

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
	UE_LOG(LogTemp, Warning, TEXT("Dash Start"));
	MovementComponent->MaxWalkSpeed = DefaultDashSpeed * MaxDashSpeed;
}

void AMainCharacterHunter::DashEndAction(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Dash End"));
	MovementComponent->MaxWalkSpeed = DefaultDashSpeed;
}

// ���� ����
void AMainCharacterHunter::MeleeAttackAction(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Melee Attack"));

	this->MeleeAttack();

}

void AMainCharacterHunter::RangeAttackAction(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Range Attack"));

	this->RangeAttack();

	WeaponActor->Attack();
}
