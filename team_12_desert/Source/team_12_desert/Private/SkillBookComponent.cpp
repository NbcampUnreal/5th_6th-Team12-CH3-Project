// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBookComponent.h"
#include "SkillBase.h"
#include "MainCharacter.h"

// Sets default values for this component's properties
USkillBookComponent::USkillBookComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USkillBookComponent::BeginPlay()
{
	Super::BeginPlay();

	Distance = 0.f;
	// ...
}

void USkillBookComponent::ActionSkill(TArray<TObjectPtr<AActor>> Actors, float time)
{
	if (SkillList.Num() > 0)
	{
		for (TObjectPtr<ASkillBase> Skill : SkillList)
		{
			if (Skill && IsValid(GetOwner()))
			{
				Skill->ActionSkill(Actors, time, GetOwner()->GetActorLocation());
			}
		}
	}
}

// Called every frame
void USkillBookComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Distance += 1 * DeltaTime;

	if (FMath::IsNearlyZero(FMath::Fmod(Distance, 1.0f), KINDA_SMALL_NUMBER))
	{
		if(OverlappedActors.Num() != 0)
		{
			ActionSkill(OverlappedActors, Distance);
		}
	}
}

void USkillBookComponent::AddSkill(TObjectPtr<ASkillBase> NewSkill)
{
	SkillList.Add(NewSkill);
	if (IsValid(GetOwner()))
	{
		NewSkill->AttachSkill(Cast<AMainCharacter>(GetOwner()));
	}
}

void USkillBookComponent::DeleteSkill(TObjectPtr<ASkillBase> SkillToDelete)
{
	SkillList.Remove(SkillToDelete);

	if (IsValid(GetOwner()))
	{
		SkillToDelete->DetachSkill(Cast<AMainCharacter>(GetOwner()));
	}
}

void USkillBookComponent::ActivateItem(TObjectPtr<AActor> Actor)
{
	OverlappedActors.Add(Actor);
}

void USkillBookComponent::DeactivateItem(TObjectPtr<AActor> Actor)
{
	OverlappedActors.Remove(Actor);
}