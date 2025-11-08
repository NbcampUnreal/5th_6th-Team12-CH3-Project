// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossHp.generated.h"

class UProgressBar;
class UWidgetComponent;
/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UBossHp : public UUserWidget
{
	GENERATED_BODY()

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* MainHp;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* SubHp;
public:
	UFUNCTION()
	void OnBossHPChanged(float NewPercent);
};
