// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Blueprint/UserWidget.h"
#include "ItemInventoryData.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	Items.SetNum(InventorySize);
}

void UInventoryComponent::AddItem(FName ItemID)
{
	if (ItemID == NAME_None) return;

	TArray<FItemInventoryData*> AllRows;
	static const FString ContextString(TEXT("Item Data Table Context"));
	InvenDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return;
	

	// Items배열을 처음부터 끝까지 돕니다.
	for (int32 i = 0; i < Items.Num(); i++)
	{
		if (Items[i]->ItemName == ItemID)
		{
			Items[i]->Quantity += 1;
			return;
		}
	}
	// 추후 위 반복문에서 빈칸을 미리 찾아두고 아래에 찾은 빈칸에 넣도록 수정 요망
	for (int32 i = 0; i < Items.Num(); i++)
	{
		// 비어있는 칸이 있는지 찾습니다.
		if (Items[i] == nullptr)
		{
			// 비어있는 칸에 주운 ItemID, Quantity를 대입합니다.
			if(FItemInventoryData* NewItem = InvenDataTable->FindRow<FItemInventoryData>(ItemID, TEXT("")))
			{
				Items[i] = NewItem;
				Items[i]->Quantity = 1;
			}

			if (GEngine)
			{
				FString const Msg = FString::Printf(TEXT("아이템 저장! [ %d번 ] 슬롯에 [ %s ] 저장!"), i, *ItemID.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Msg);
			}

			return;
		}
	}
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("인벤토리가 모두 찼습니다!"));
	}
}
