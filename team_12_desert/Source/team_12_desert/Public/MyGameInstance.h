// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMyGameInstance();

	void PlayerStatSave();
	void PlayerStatLoad();

	int GetMonsterCount() { return MonsterCount; }
	void AddMonsterCount(int a) { MonsterCount += a; }
	void SetMonsterCount(int a) { MonsterCount = a; }

	void NextLevel();

	int32 GetCurrentLevelIndex() { return CurrentLevelIndex; }
	void AddCurrentLevelIndex(int a) { CurrentLevelIndex+=a; }

	// ��ü ������ ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level")
	int32 MaxLevels;
	// ���� ���� �� �̸� �迭. ���� �ִ� �ε����� ���ʴ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level")
	TArray<FName> LevelMapNames;

	//void SetLevelMap(TArray<FName> name);

private:
	int MonsterCount=0;
	int32 CurrentLevelIndex=0;

	//todo:�÷��̾� ���� ���� �� �����̵��� ����,��,���� �ߴ� Ÿ�̹� 
};
