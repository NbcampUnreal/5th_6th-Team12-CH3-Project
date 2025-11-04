// Fill out your copyright notice in the Description page of Project Settings.


#include "ActiveItemBase.h"
#include "InventoryComponent.h"
#include "MainCharacter.h"

// Sets default values
AActiveItemBase::AActiveItemBase()
{
    ItemID = "DefaultItem";
	InventoryComponent = nullptr;
}

void AActiveItemBase::OnItemOverlap(UPrimitiveComponent* OverlapPendComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    ActivateItem(OtherActor);
}

void AActiveItemBase::OnItemEndOverlap(UPrimitiveComponent* OverlapPendComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    DeactivateItem(OtherActor);
}

void AActiveItemBase::ActivateItem(TObjectPtr<AActor> Actor)
{
    if(Actor->ActorHasTag(TEXT("Player")))
    {
        MainCharacter = Cast<AMainCharacter>(Actor);
        if (MainCharacter)
        {
            InventoryComponent = MainCharacter->getInventoryComponent();
            if (InventoryComponent)
            {
                InventoryComponent->AddItem(ItemID);
                Destroy();
            }
        }
	}
}

void AActiveItemBase::DeactivateItem(TObjectPtr<AActor> Actor)
{
}

void AActiveItemBase::Active()
{

}

