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

		if (speed > 0.0f)
		{
			// ���� �ӵ��� ���� ����
			FVector NormalizedVelocity = CharacterMovementComp->Velocity.GetSafeNormal();
			FVector ForwardVector = MainCharacterRef->GetActorForwardVector();
			FVector RightVector = MainCharacterRef->GetActorRightVector();

			// ��/�� ��/�� ������ ��� �� ����
			DirectionForwardBackward = FVector::DotProduct(ForwardVector, NormalizedVelocity);
			DirectionRightLeft = FVector::DotProduct(RightVector, NormalizedVelocity);
			//UE_LOG(LogTemp, Warning, TEXT("%f"), speed);
			//UE_LOG(LogTemp, Warning, TEXT("DirectionForwardBackward: %f, DirectionRightLeft: %f"), DirectionForwardBackward, DirectionRightLeft);
		}
		else
		{
			// �������� ���� 0���� ����
			DirectionForwardBackward = 0.0f;
			DirectionRightLeft = 0.0f;
		}
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
