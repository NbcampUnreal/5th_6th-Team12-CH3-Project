// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DamageText.generated.h"

class UTextBlock; 
class UWidgetComponent;
class UWidgetAnimation;
/**
 * */
UCLASS()
class TEAM_12_DESERT_API UDamageText : public UUserWidget
{
	GENERATED_BODY()
	//virtual void NativeConstruct() override;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* DamageTextBlock;

	UFUNCTION()
	void SetDamageText(float damage);

	UPROPERTY(EditAnywhere, Category="Hud")
	UWidgetComponent* damageWidget;

	UPROPERTY(EditAnywhere, Category="Myseetings", meta=(BindWidgetAnim),transient)
	UWidgetAnimation* DamageAnim;

public:
	void PlayDamageText(float damage);
};