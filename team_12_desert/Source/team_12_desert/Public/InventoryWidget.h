// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeOnInitialized() override;

public:

	UPROPERTY(EditAnywhere, Category = "InventoryComponent")
	TSubclassOf<class UInventoryComponent> InventoryComponentClass;

	UPROPERTY(VisibleAnywhere, Category = "InventoryComponent")
	TObjectPtr<UInventoryComponent> InventoryComponent;

	class UItemSoltWidget* ItemSoltWidgetClass;


	TArray<struct FItemInventoryData*> Items;

	void UpdateInventory();
};
