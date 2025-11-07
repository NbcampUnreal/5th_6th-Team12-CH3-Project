// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryComponent.h"
#include "ItemSoltWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UItemSoltWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativePreConstruct() override;
	void UpdateItemWidget();
public:

	void SetItem(const FItemInventory& Item);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory|Data")
	TObjectPtr<UDataTable> ItemDataTable;
	FItemInventory Item;

private:

	struct FItemInventoryData* GetItemData(const FItemInventory& Item) const;

	UFUNCTION()
	void ItemActive();


};
