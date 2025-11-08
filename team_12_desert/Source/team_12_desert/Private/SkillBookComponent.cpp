// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBookComponent.h"
#include "SkillBase.h"
#include "Monster.h"
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

}

void USkillBookComponent::ActionSkill(TArray<TObjectPtr<AMonster>>& Actors, int32 Distance)
{
	if (SkillList.Num() > 0)
	{
		for (TObjectPtr<ASkillBase>& Skill : SkillList)
		{
			if (Skill != nullptr && IsValid(GetOwner()))
			{
				Skill->ActionSkill(Actors, Distance, GetOwner());
			}
		}
	}
}


void USkillBookComponent::AddSkill(TObjectPtr<ASkillBase> NewSkill)
{
	SkillList.Emplace(NewSkill);
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

