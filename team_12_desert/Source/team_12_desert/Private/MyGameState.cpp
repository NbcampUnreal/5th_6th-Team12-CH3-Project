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
#include "BossMonster.h"
#include "BossHp.h"

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

	if (!(CurrentMapName == "Prologue")) {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::InGame);
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

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::I)) {
		if (!Inven) 
			Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::Inventory);
		
		else
			Cast<UMyGameInstance>(GetGameInstance())->TurnOffHud(HudPreset::Inventory);

		Inven = !Inven;
	}
	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::P)) {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::Pause);
		UGameplayStatics::SetGamePaused(GetWorld(), true);

	}

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::K)) {
		PortalsOpen(true);
	}

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::F)) {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::Die);
	}

}

void AMyGameState::StartLevel()
{


}

void AMyGameState::UpdateMonsterKillCountHud() {
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
		MonsterRemainingText->SetText(FText::FromString(FString::Printf(TEXT("%d"), MonsterKillCount)));
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
	RemainingTime->SetText(FText::FromString(FString::Printf(TEXT("%.1f"), time)));
}

void AMyGameState::UpdateAttackHud(int Attack)
{
	if (AttackText == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				AttackText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Attack")));
			}
		}
	}

	if (!AttackText)
		return;

	AttackText->SetVisibility(ESlateVisibility::Visible);
	AttackText->SetText(FText::FromString(FString::Printf(TEXT("%d"), Attack)));
}

void AMyGameState::UpdateArmorHud(int Defence)
{
	if (ArmorText == nullptr) {
		if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance())) {
			if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::InGame)) {
				ArmorText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Shield")));
			}
		}
	}

	if (!ArmorText)
		return;

	ArmorText->SetVisibility(ESlateVisibility::Visible);
	ArmorText->SetText(FText::FromString(FString::Printf(TEXT("%d"), Defence)));
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

void AMyGameState::BossSpawn()
{
	TArray<AActor*> BossActors;
	
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Boss", BossActors);


	if (BossActors.Num() > 0)
	{
		ABossMonster* Boss = Cast<ABossMonster>(BossActors[0]);
		if (Boss)
		{		
			UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance());
			GI->TurnOnHud(HudPreset::BossHp);
			if (UUserWidget* BossHud = GI->GetHUDWidget(HudPreset::BossHp))
			{
				UBossHp* BossHpWidget = Cast<UBossHp>(BossHud);
				if (BossHpWidget)
				{
					Boss->OnHPChanged.AddDynamic(BossHpWidget, &UBossHp::OnBossHPChanged);
				}
			}
		}
	}
}

void AMyGameState::AddCurrentMonsterCount(int num)
{
	MonsterCount += num; 	
	if (MonsterCount < 0  ) {
		MonsterCount = 0;
	}
	UE_LOG(LogTemp, Warning, TEXT("state class now= %d"), MonsterCount);
}

bool AMyGameState::ReachMonsterCountLimit()
{
	if (MonsterCount+1 > MonsterLimit) {
		return true;
	}
	return false;
}

void AMyGameState::LevelTest()
{
}
