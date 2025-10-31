// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBase.h"
#include "MainCharacter.h"

// Sets default values
ASkillBase::ASkillBase()
{
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	NiagaraEffect = nullptr;
	Delay = 0.0f;
	SkillName = TEXT("SkillName");
	SkillExplanation = TEXT("Skillseolmyeong");
	MainCharacter = nullptr;
}

void ASkillBase::ActionSkill(TArray<AActor*> Actors, float time, FVector Location)
{

}

void ASkillBase::AttachSkill(TObjectPtr<AMainCharacter> Character)
{
	MainCharacter = Character;
}

void ASkillBase::DetachSkill(TObjectPtr<AMainCharacter> Character)
{
	MainCharacter = nullptr;
}

