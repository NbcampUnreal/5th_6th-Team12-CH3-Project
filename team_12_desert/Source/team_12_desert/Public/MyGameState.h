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
class AMonster;

UCLASS()
class TEAM_12_DESERT_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
	AMyGameState();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void AddMonsterCount(int32 a) { MonsterKillCount += a; }
	int32 GetMonsterCount() { return MonsterKillCount; }
	void SetMonsterCount(int32 a) { MonsterKillCount = a; }
	void UpdateMonsterKillCountHud();
	void UpdateStaminaHud(float MaxStamina, float CurrentStamina);
	void UpdateHpHud(float MaxHp, float CurrentHp);
	void UpdateHitMarkHud(float DeltaTime);
	void UpdateTimeHud();
	void UpdateAttackHud(int Attack);
	void UpdateArmorHud(int Defence);
	void ResetHitMark() { HitMarkOpa = 1; }
	float GetTime() { return time; }

	bool IsFinsh() { return finish; }

	void PortalsOpen(bool val);

	float GetReamingTime() { return time; }

	void BossSpawn();

	void AddCurrentMonsterCount(int num);
	int GetCurrentMonsterCount() { return MonsterCount; }

	bool ReachMonsterCountLimit();

protected:

	UFUNCTION(BlueprintCallable, Category = "Level")
	void LevelTest();

	// 레벨을 시작할 때, 아이템 스폰 및 타이머 설정
	void StartLevel();
	// 레벨 제한 시간이 만료되었을 때 호출
	void OnLevelTimeUp();

	void NextLevel();

	

	TArray<FName> LevelMapNames;

	int MonsterKillCount = 0;
	int MonsterCount=0;
	int MonsterLimit = 10;

	//UI
	UProgressBar* Hpbar = nullptr;
	UProgressBar* Staminabar = nullptr;
	UImage* HitMarker = nullptr;
	UTextBlock* RemainingTime = nullptr;
	UTextBlock* MonsterRemainingText = nullptr;
	UTextBlock* AttackText = nullptr;
	UTextBlock* ArmorText = nullptr;
	UProgressBar* BossHpbarmain = nullptr;
	UProgressBar* BossHpbarsub = nullptr;

	float HitMarkOpa = 0.f;
	
	float time;

	bool finish = false;

	bool Pause = true;

	bool Inven = false;

	FString CurrentMapName;

	TArray<AActor*> Portals;


};
