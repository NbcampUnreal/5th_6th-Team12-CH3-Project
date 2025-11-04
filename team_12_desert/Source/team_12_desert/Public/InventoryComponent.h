// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAM_12_DESERT_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	TArray<struct FItemInventoryData*> Items; // 아이템슬롯을 TArray배열로 만들어서 여러 슬롯을 가진 아이템 배열 완성
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDataTable> InvenDataTable;

	TArray<FItemInventoryData*> getItems() const { return Items; }


	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	int32 InventorySize = 20;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddItem(FName ItemID); // 아이템 줍는 함수, 위젯 블루프린트에서 호출(BlueprintCallable)

};
