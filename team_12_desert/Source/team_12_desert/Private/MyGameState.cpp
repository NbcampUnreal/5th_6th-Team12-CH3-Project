// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"
#include "Spawner.h"
#include "MonsterAICharacter.h"
#include "Portal.h"
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

	CurrentMapName = UGameplayStatics::GetCurrentLevelName(GetWorld());

	if (CurrentMapName == "Prologue") {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::MainMenu);

	}
	else {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::InGame);
		UpdateMonsterCountHud();
	}
	time = Cast<UMyGameInstance>(GetGameInstance())->GetLevelTime();


	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Portal", Portals);

	PortalsOpen(false);
}

void AMyGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Pause) {
		UpdateHitMarkHud(DeltaTime);
		UpdateTimeHud();

		//게임 버티기 시간설정
		time -= DeltaTime;
		if (time <= 0) {
			time = 0;
			finish = true;
		}
	}

	//if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::I)) { Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::Inventory); }

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::K)) { PortalsOpen(true); }

}

void AMyGameState::StartLevel()
{


}

void AMyGameState::UpdateMonsterCountHud() {
	if (MonsterRemainingText == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				MonsterRemainingText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("MonsterCount")));
			}
		}
	}
	if (!MonsterRemainingText)
		return;

	if (GetLevel()) {
		if (CurrentMapName == "Prologue") {
			MonsterRemainingText->SetVisibility(ESlateVisibility::Hidden);
			return;
		}
	}

	if (MonsterRemainingText) {
		MonsterRemainingText->SetVisibility(ESlateVisibility::Visible);
		MonsterRemainingText->SetText(FText::FromString(FString::Printf(TEXT("Count: %d"), MonsterCount)));
	}
}

void AMyGameState::UpdateStaminaHud(float MaxStamina, float CurrentStamina)
{
	/*if (!Cast<UMyGameInstance>(GetGameInstance())->IsHudTurnOn(HudPreset::InGame)) {
		return;
	}*/

	if (Staminabar == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				Staminabar = Cast<UProgressBar>(HUDWidget->GetWidgetFromName(TEXT("StaminaBar")));
			}
		}
	}

	if (Staminabar) {
		Staminabar->SetPercent(CurrentStamina / MaxStamina);
	}
}

void AMyGameState::UpdateHpHud(float MaxHp, float CurrentHp)
{
	/*if (!Cast<UMyGameInstance>(GetGameInstance())->IsHudTurnOn(HudPreset::InGame)) {
		return;
	}*/
	if (Hpbar == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				Hpbar = Cast<UProgressBar>(HUDWidget->GetWidgetFromName(TEXT("HpBar")));
			}
		}
	}
	if (Hpbar)
		Hpbar->SetPercent(CurrentHp / MaxHp);
}

void AMyGameState::UpdateHitMarkHud(float dt)
{
	/*if (!Cast<UMyGameInstance>(GetGameInstance())->IsHudTurnOn(HudPreset::InGame)) {
		return;
	}*/

	if (HitMarker == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				HitMarker = Cast<UImage>(HUDWidget->GetWidgetFromName(TEXT("Hitmark")));
			}
		}
	}

	if (!HitMarker)
		return;
	HitMarker->SetRenderOpacity(HitMarkOpa);

	const float FadeDuration = 0.5f;
	const float FadeSpeed = 1.0f / FadeDuration;

	HitMarkOpa -= dt * FadeSpeed;
	HitMarkOpa = FMath::Clamp(HitMarkOpa, 0.0f, 1.0f);

}

void AMyGameState::UpdateTimeHud()
{
	/*if (!Cast<UMyGameInstance>(GetGameInstance())->IsHudTurnOn(HudPreset::InGame)) {
		return;
	}*/

	if (RemainingTime == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				RemainingTime = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time")));
			}
		}
	}

	if (!RemainingTime)
		return;

	if (CurrentMapName == "Prologue") {
		RemainingTime->SetVisibility(ESlateVisibility::Hidden);
		return;
	}
	RemainingTime->SetVisibility(ESlateVisibility::Visible);
	RemainingTime->SetText(FText::FromString(FString::Printf(TEXT("Time: %.2f"), time)));
}


void AMyGameState::OnLevelTimeUp()
{
}

void AMyGameState::PortalsOpen(bool val)
{
	for (int i = 0; i < Portals.Num(); i++) {
		if (APortal* Portal = Cast<APortal>(Portals[i]))
		{
			Portal->SetPortalActive(val);
		}
	}
}

void AMyGameState::LevelTest()
{
}
