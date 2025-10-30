// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "HealStoneStatue.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AHealStoneStatue : public AAItemBase
{
	GENERATED_BODY()

public:
	//�� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float Duration;

	//���ӽð�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float DestroyDuration;

private:
	int32 HealAmount;
	FTimerHandle HealTimer;
	FTimerHandle DestroyTimer;
	bool bIsActive;
	TObjectPtr<class AMainCharacter> PlayerCharacter;

	AHealStoneStatue();
	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void DeactivateItem(TObjectPtr<AActor> Actor) override;
	void Heal();
	void DestroyItem();
	~AHealStoneStatue();
};
