// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemRandomBox.h"
#include "ItemSpawnRow.h"

// Sets default values
AItemRandomBox::AItemRandomBox()
{
	ItemDataTable = nullptr;
	ExpUpItem = nullptr;
}

// ���Ϳ� �����Ų�� ������ּ���
// ���������� �ܺο��� ����̵Ǵ� �Լ��̸� Location�κп� getLocation�� ���� �Լ��� ������ ���� location�� ���ڷ� �־��ֽø� �˴ϴ�
TObjectPtr<AActor> AItemRandomBox::SpawnRandomItem(FVector Location)
{
	if (!IsValid(ItemDataTable) || !IsValid(ExpUpItem)) return nullptr;
	if (FItemSpawnRow* SelectedRow = GetRandomItem())
	{
		if (TObjectPtr<UClass> ActualClass = SelectedRow->ItemClass.Get())
		{
			const float RandomValue = FMath::FRandRange(0.f, 1.f);
			if (RandomValue <= 0.8f)
			{
				SpawnItem(ExpUpItem, Location);
			}
			return SpawnItem(ActualClass, Location);
		}
	}
	return nullptr;
}

FItemSpawnRow* AItemRandomBox::GetRandomItem() const
{
	if (!ItemDataTable) return nullptr;

	TArray<FItemSpawnRow*> AllRows;
	static const FString ContextString(TEXT("Item Data Table Context"));
	ItemDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return nullptr;

	const float RandomValue = FMath::FRandRange(0.f, 1.f);

	float AccumulatedChance = 0.f;

	for (FItemSpawnRow* Row : AllRows)
	{
		AccumulatedChance += Row->SpawnChance;
		if (RandomValue < AccumulatedChance)
		{
			return Row;
		}
	}

	return nullptr;
}


TObjectPtr<AActor> AItemRandomBox::SpawnItem(TSubclassOf<AActor> ItemClass, FVector Location)
{
	if (!ItemClass) return nullptr;
	TObjectPtr<AActor> SpawnedItem = GetWorld()->SpawnActor<AActor>(ItemClass, Location, FRotator::ZeroRotator);
	return SpawnedItem;
}