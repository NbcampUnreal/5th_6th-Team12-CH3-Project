// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 * 
 */

class MonsterAICharactor;

UCLASS()
class TEAM_12_DESERT_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
	AMyGameState();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
protected:

	UFUNCTION(BlueprintCallable, Category = "Level")
	void LevelTest();

	// ������ ������ ��, ������ ���� �� Ÿ�̸� ����
	void StartLevel();
	// ���� ���� �ð��� ����Ǿ��� �� ȣ��
	void OnLevelTimeUp();

	void NextLevel();


	TArray<FName> LevelMapNames;



};
