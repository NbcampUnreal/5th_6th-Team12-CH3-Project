// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"
#include "InventoryComponent.h"
#include "ItemSoltWidget.h"
#include "Components/WrapBox.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UE_LOG(LogTemp, Display, TEXT("InvenUpdate"));
	if (InventoryComponentClass)
	{
		InventoryComponent = Cast<UInventoryComponent>(GetOwningPlayerPawn()->GetComponentByClass(InventoryComponentClass));
		UpdateInventory();
	}
}	

void UInventoryWidget::UpdateInventory()
{
	TArray<FItemInventory> Items = InventoryComponent->getItems();
	if (TObjectPtr<UWrapBox> Inven = Cast<UWrapBox>(GetWidgetFromName(TEXT("InventoryCanvas"))))
	{
		Inven->ClearChildren();
		UE_LOG(LogTemp, Display, TEXT("InvenUpdate"));
		for (const FItemInventory Item : Items)
		{
			UItemSoltWidget* ItemSlot = CreateWidget<UItemSoltWidget>(GetOwningPlayer(), ItemSlotWidgetClass);
			if (ItemSlot == nullptr) UE_LOG(LogTemp, Display, TEXT("error null"));
			if (ItemSlot)
			{
				ItemSlot->SetItem(Item);
				Inven->AddChild(ItemSlot);
			}
		}
	}
}
