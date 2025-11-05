// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 *
 */

class MonsterAICharactor;
class UProgressBar;
class UImage;
class UTextBlock;

UCLASS()
class TEAM_12_DESERT_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
	AMyGameState();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void AddMonsterCount(int32 a) { MonsterCount += a; }
	int32 GetMonsterCount() { return MonsterCount; }
	void SetMonsterCount(int32 a) { MonsterCount = a; }
	void UpdateMonsterCountHud();
	void UpdateStaminaHud(float MaxStamina, float CurrentStamina);
	void UpdateHpHud(float MaxHp, float CurrentHp);
	void UpdateHitMarkHud(float DeltaTime);
	void UpdateTimeHud();
	void ResetHitMark() { HitMarkOpa = 1; }
	float GetTime() { return time; }

protected:

	UFUNCTION(BlueprintCallable, Category = "Level")
	void LevelTest();

	// 레벨을 시작할 때, 아이템 스폰 및 타이머 설정
	void StartLevel();
	// 레벨 제한 시간이 만료되었을 때 호출
	void OnLevelTimeUp();

	void NextLevel();

	TArray<FName> LevelMapNames;

	int MonsterCount = 0;

	//UI
	UProgressBar* Hpbar = nullptr;
	UProgressBar* Staminabar = nullptr;
	UImage* HitMarker = nullptr;
	UTextBlock* RemainingTime = nullptr;
	UTextBlock* MonsterRemainingText = nullptr;

	float HitMarkOpa = 0.f;
	
	float time;

	bool Pause = true;

	FString CurrentMapName;

};
