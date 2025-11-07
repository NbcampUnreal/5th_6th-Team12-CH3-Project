// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemSoltWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UItemSoltWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeOnInitialized() override;
public:

	void SetItem(const struct FItemInventory& Item);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory|Data")
	TObjectPtr<UDataTable> ItemDataTable;

private:

	struct FItemInventoryData* GetItemData() const;

	void ItemActive();

	FName ItemID;
	int32 Quantity;

};
