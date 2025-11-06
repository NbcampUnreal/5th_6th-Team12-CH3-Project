// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSoltWidget.h"
#include "InventoryComponent.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "ItemInventoryData.h"
#include "Components/Button.h"
#include "ActiveItemBase.h"

void UItemSoltWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (ItemDataTable != nullptr)
	{
		if (FItemInventoryData* ItemData = GetItemData())
		{
			if (TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
			{
				ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT("%d"), Quantity)));
			}
			if (TObjectPtr<UImage> ItemImage = Cast<UImage>(GetWidgetFromName(TEXT("ItemImage"))))
			{
				ItemImage->SetBrushFromTexture(ItemData->ItemIcon);
			}
			if (TObjectPtr<UButton> ActiveButton = Cast<UButton>(GetWidgetFromName(TEXT("Active"))))
			{
				ActiveButton->OnClicked.AddDynamic(this, &UItemSoltWidget::ItemActive);
			}
		}
		else
		{
			if (TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
			{
				ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT(""))));
			}
		}
	}
	
}

void UItemSoltWidget::SetItem(const  FItemInventory& Item)
{
	ItemID = Item.ItemName;
	Quantity = Item.Quantity;
	if (ItemDataTable != nullptr)
	{
		if (FItemInventoryData* ItemData = GetItemData())
		{
			if (TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
			{
				ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT("%d"), Quantity)));
			}
			if (TObjectPtr<UImage> ItemImage = Cast<UImage>(GetWidgetFromName(TEXT("ItemImage"))))
			{
				ItemImage->SetBrushFromTexture(ItemData->ItemIcon);
			}
			if (TObjectPtr<UButton> ActiveButton = Cast<UButton>(GetWidgetFromName(TEXT("Active"))))
			{
				ActiveButton->OnClicked.AddDynamic(this, &UItemSoltWidget::ItemActive);
			}
		}
		else
		{
			if (TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
			{
				ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT(""))));
			}
		}
	}
}

FItemInventoryData* UItemSoltWidget::GetItemData() const
{
	TArray<FItemInventoryData*> AllRows;
	static const FString ContextString(TEXT("Item Data Table Context"));
	ItemDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return nullptr;

	for(FItemInventoryData* Row : AllRows)
	{
		if (Row->ItemName == ItemID)
		{
			return Row;
		}
	}
	return nullptr;
}

void UItemSoltWidget::ItemActive()
{
	if (FItemInventoryData* ItemData = GetItemData())
	{
		if (ItemData->ItemInstance)
		{
			ItemData->ItemInstance->Active();
			Quantity--;
			if (Quantity <= 0)
			{
				ItemID = NAME_None;
				if (TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
				{
					ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT(""))));
				}
				if (TObjectPtr<UImage> ItemImage = Cast<UImage>(GetWidgetFromName(TEXT("ItemImage"))))
				{
					ItemImage->SetBrushFromTexture(nullptr);
				}
			}
		}
		else
		{
			if (TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
			{
				ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT(""))));
			}
		}
	}
}
