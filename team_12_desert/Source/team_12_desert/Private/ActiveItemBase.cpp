// Fill out your copyright notice in the Description page of Project Settings.


#include "ActiveItemBase.h"

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
}

void AActiveItemBase::DeactivateItem(TObjectPtr<AActor> Actor)
{
}

// Sets default values
AActiveItemBase::AActiveItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

}


