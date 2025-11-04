// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"
#include "InventoryComponent.h"
#include "ItemSoltWidget.h"
#include "Components/WrapBox.h"

void UInventoryWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (InventoryComponentClass)
	{
		InventoryComponent = Cast<UInventoryComponent>(GetOwningPlayerPawn()->GetComponentByClass(InventoryComponentClass));
	}
	UpdateInventory();
}

void UInventoryWidget::UpdateInventory()
{
	Items = InventoryComponent->getItems();
	if (TObjectPtr<UWrapBox> Inven = Cast<UWrapBox>(GetWidgetFromName(TEXT("InventoryCanvas"))))
	{
		Inven->ClearChildren();
		for (const FItemInventoryData* Item : Items)
		{
			UItemSoltWidget* ItemSlot = CreateWidget<UItemSoltWidget>(Inven);
			if (ItemSlot)
			{
				ItemSlot->SetItem(Item);
				Inven->AddChild(ItemSlot);
			}
		}
	}
}
