// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSoltWidget.h"
#include "InventoryComponent.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "ItemInventoryData.h"

void UItemSoltWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UItemSoltWidget::SetItem(const  FItemInventoryData* Item)
{
	ItemID = Item->ItemName;
	Quantity = Item->Quantity;
	if(IsValid(ItemDataTable))
	{
		ItemData = GetItemData();
		if(ItemData)
		{
			if(TObjectPtr<UTextBlock> ItemQuantity = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemQuantity"))))
			{
				ItemQuantity->SetText(FText::FromString(FString::Printf(TEXT("%d"), Quantity)));
			}
			if (TObjectPtr<UImage> ItemImage = Cast<UImage>(GetWidgetFromName(TEXT("ItemImage"))))
			{
				ItemImage->SetBrushFromTexture(ItemData->ItemIcon);
			}
		}
	}
}

TObjectPtr<FItemInventoryData> UItemSoltWidget::GetItemData() const
{
	return ItemDataTable->FindRow<FItemInventoryData>(ItemID, TEXT(""));
}