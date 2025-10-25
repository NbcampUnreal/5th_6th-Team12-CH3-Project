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
	CameraBoom->bUsePawnControlRotation = true; // 폰 제어 회전 True


	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);


	/// 언리얼 제공 부모 Character의 max 속도를 저장(BP에서 수정 가능 기본 600)
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
	// 251023_mpyi_추후 구현
}

void AMainCharacterHunter::RangeAttack()
{
	Super::RangeAttack();
	// 251023_mpyi_추후 구현
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

	/// 251023_mpyi)자세한 히트, 죽음 판정은 차후 구현	
	Destroy();

}

// 기본 wasd 이동
void AMainCharacterHunter::MoveAction(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddMovementInput(GetActorForwardVector(), MovementVector.X);
		AddMovementInput(GetActorRightVector(), MovementVector.Y);
	}
}

// 기본 mouse 시점 이동, 상하각은 clamp로 제한 걸지 말지 차후 결정
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

// 대쉬 시작시 이동속도 증가 기본값 1.5배(BP에서 조절가능)
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

// 근접 공격
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
