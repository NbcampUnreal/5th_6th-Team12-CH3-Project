// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"
#include "Spawner.h"
#include "MonsterAICharacter.h"

#include "EnhancedInputComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/TextBlock.h"
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
	
	//Cast<UMyGameInstance>(GetGameInstance())->SetLevelMap(LevelMapNames);

	Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::MainMenu);
	UpdateHud();
	//플레이어 정보 로딩 함수호출
	//Cast<UMyGameInstance>(GetGameInstance())->PlayerStatLoad();

}
void AMyGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//다음레벨조건
	if (MonsterCount==0) {
		//Cast<UMyGameInstance>(GetGameInstance())->NextLevel();
	}

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::O)) {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOffHud(HudPreset::MainMenu);
	}

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::L)) {
		Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::MainMenu);
	}

	if (GetWorld()->GetFirstPlayerController()->WasInputKeyJustPressed(EKeys::P)) {
		Cast<UMyGameInstance>(GetGameInstance())->NextLevel(); 
	}
}

void AMyGameState::StartLevel()
{

	
}

void AMyGameState::UpdateHud() {
	if(UMyGameInstance* GI= Cast<UMyGameInstance>(GetGameInstance())){
		if (UUserWidget* HUDWidget = GI->GetHUDWidget(HudPreset::MainMenu)) {
			UTextBlock* MonsterRemainingText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("MonsterCount")));
			MonsterRemainingText->SetText(FText::FromString(FString::Printf(TEXT("Count: %d"), MonsterCount)));
		}
	}

}

void AMyGameState::OnLevelTimeUp()
{
}

void AMyGameState::LevelTest()
{
}
