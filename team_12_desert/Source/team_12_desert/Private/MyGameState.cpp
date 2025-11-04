// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"
#include "Spawner.h"
#include "MonsterAICharacter.h"

#include "EnhancedInputComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "Blueprint/UserWidget.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

AMyGameState::AMyGameState()
{
	UE_LOG(LogTemp, Warning, TEXT("Start"));
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

//레벨바뀔때마다 호출
void AMyGameState::BeginPlay()
{
	Super::BeginPlay();

	Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::InGame);
	UpdateMonsterCountHud();
}

void AMyGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Pause) {
		UpdateHitMarkHud(DeltaTime);
		//게임 버티기 시간설정
	}
}

void AMyGameState::StartLevel()
{


}

void AMyGameState::UpdateMonsterCountHud() {
	if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
		if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
			UTextBlock* MonsterRemainingText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("MonsterCount")));
			MonsterRemainingText->SetText(FText::FromString(FString::Printf(TEXT("Count: %d"), MonsterCount)));
		}
	}

}

void AMyGameState::UpdateStaminaHud(float MaxStamina, float CurrentStamina)
{
	if (Staminabar == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				Staminabar = Cast<UProgressBar>(HUDWidget->GetWidgetFromName(TEXT("StaminaBar")));
			}
		}
	}

	Staminabar->SetPercent(CurrentStamina / MaxStamina);
}

void AMyGameState::UpdateHpHud(float MaxHp, float CurrentHp)
{
	if (Hpbar == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				Hpbar = Cast<UProgressBar>(HUDWidget->GetWidgetFromName(TEXT("HpBar")));
			}
		}
	}
	Hpbar->SetPercent(CurrentHp / MaxHp);
}

void AMyGameState::UpdateHitMarkHud(float dt)
{
	if (HitMarker == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				HitMarker = Cast<UImage>(HUDWidget->GetWidgetFromName(TEXT("Hitmark")));
			}
		}
	}
	HitMarker->SetRenderOpacity(HitMarkOpa);

	const float FadeDuration = 0.5f;
	const float FadeSpeed = 1.0f / FadeDuration; // 2.0f per second

	HitMarkOpa -= dt * FadeSpeed;
	HitMarkOpa = FMath::Clamp(HitMarkOpa, 0.0f, 1.0f);
	
}


void AMyGameState::OnLevelTimeUp()
{
}

void AMyGameState::LevelTest()
{
}
