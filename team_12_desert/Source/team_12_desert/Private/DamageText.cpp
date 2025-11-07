// Fill out your copyright notice in the Description page of Project Settings.

#include "DamageText.h"
#include "Components/TextBlock.h"        // UTextBlock 사용
#include "Kismet/GameplayStatics.h"      // UGameplayStatics 사용
#include "GameFramework/PlayerController.h" // APlayerController 사용

//void UDamageText::NativeConstruct()
//{
//	Super::NativeConstruct();
//}

void UDamageText::SetDamageText(float damage)
{
}

void UDamageText::PlayDamageText(float damage)
{
	PlayAnimation(DamageAnim);
	DamageTextBlock->SetText(FText::AsNumber(damage));
}
