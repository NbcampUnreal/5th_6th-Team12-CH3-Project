// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBase.h"

// Sets default values
ASkillBase::ASkillBase()
{
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	NiagaraEffect = nullptr;
	Delay = 0.0f;
}

void ASkillBase::ActionSkill(TArray<AActor*> Actors, float time, FVector Location)
{

}

