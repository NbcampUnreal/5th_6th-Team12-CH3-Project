// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultGameMode.h"
#include "MainCharacter.h"

ADefaultGameMode::ADefaultGameMode()
{
	DefaultPawnClass = AMainCharacter::StaticClass();
}

void ADefaultGameMode::BeginPlay()
{
	Super::BeginPlay();
}
