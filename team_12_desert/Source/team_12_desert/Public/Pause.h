// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Pause.generated.h"

class UButton;
class UTextBlock;
/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UPause : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeConstruct() override;

public:

	UPROPERTY(meta = (BindWidget))
	UButton* Resume;

	UPROPERTY(meta = (BindWidget))
	UButton* GameExit;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* KillCount;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Time;


	UFUNCTION()
	void ResumeButtonClick();
	UFUNCTION()
	void PauseExitButtonClick();
	
};
