// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterAniminstance.h"
#include "MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMainCharacterAniminstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	MainCharacterRef = Cast<AMainCharacter>(TryGetPawnOwner());
	if (IsValid(MainCharacterRef))
	{
		CharacterMovementComp = MainCharacterRef->GetCharacterMovement();
	}
}

void UMainCharacterAniminstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(IsValid(CharacterMovementComp))
	{
		speed = CharacterMovementComp->Velocity.Size();
		MeleeAttackCount = MainCharacterRef->getMeleeAttackCount();
		RangeAttackCount = MainCharacterRef->getRangeAttackCount();
	}


	if (IsValid(MainCharacterRef))
	{
		ActorRot = MainCharacterRef->GetActorRotation();
		ControlRot = MainCharacterRef->GetControlRotation();
	}
}

void UMainCharacterAniminstance::AnimNotify_Attack()
{

	MainCharacterRef->setMeleeAttackCount(0);
	MainCharacterRef->setRangeAttackCount(0);
	MeleeAttackCount = 0;
	RangeAttackCount = 0;

}
