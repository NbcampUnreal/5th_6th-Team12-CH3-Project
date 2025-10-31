// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 *
 */

enum HudPreset
{
	MainMenu,
	InGame,
	SkillUp,
};
UCLASS()
class TEAM_12_DESERT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMyGameInstance();

	void PlayerStatSave();
	void PlayerStatLoad();

	//int GetMonsterCount() { return MonsterCount; }
	//void AddMonsterCount(int a) { MonsterCount += a; }
	//void SetMonsterCount(int a) { MonsterCount = a; }

	void TurnOffHud(HudPreset off);
	void TurnOnHud(HudPreset on);
	UUserWidget* GetHUDWidget(HudPreset preset);
	void PlayerHUDApply();
	void NextLevel();
	void TestIns();

	int32 GetCurrentLevelIndex() { return CurrentLevelIndex; }
	void AddCurrentLevelIndex(int a) { CurrentLevelIndex += a; }

	// 전체 레벨의 개수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level")
	int32 MaxLevels;
	// 실제 레벨 맵 이름 배열. 여기 있는 인덱스를 차례대로 연동
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level")
	TArray<FName> LevelMapNames;

	//void SetLevelMap(TArray<FName> name);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TArray<TSubclassOf<UUserWidget>> HudWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TArray<UUserWidget*> HUDWidgetInstance;

private:
	int32 CurrentLevelIndex = 0;
	//HudPreset CurrentHud;

	//todo:플레이어 정보 저장 및 레벨이동시 적용할것들
	int32 Hp;
	int32 MaxHp;
	int32 Stamina;
	int32 MaxStamina;
	int32 Level;
	int32 CharacterDamage;
	int32 CharacterArmor;
	int32 Exp;

	bool started = false;
};
