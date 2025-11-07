// Fill out your copyright notice in the Description page of Project Settings.


#include "ActiveItemBase.h"
#include "InventoryComponent.h"
#include "MainCharacter.h"
#include "Components/SphereComponent.h"


// Sets default values
AActiveItemBase::AActiveItemBase()
{
    ItemID = "DefaultItem";
    MainCharacter = nullptr;
	InventoryComponent = nullptr;

    Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    SetRootComponent(Scene);

    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    StaticMesh->SetupAttachment(Scene);

    Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    Collision->SetupAttachment(Scene);

    Collision->OnComponentBeginOverlap.AddDynamic(this, &AActiveItemBase::OnItemOverlap);
}

void AActiveItemBase::OnItemOverlap(UPrimitiveComponent* OverlapPendComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->ActorHasTag(TEXT("Player"))) // 캐릭터에 태그같은걸 달아서 캐릭터에만 반응하도록 추후 변경
    {
        ActivateItem(OtherActor);
    }
}


void AActiveItemBase::ActivateItem(TObjectPtr<AActor> OtherActor)
{
    if (OtherActor->ActorHasTag(TEXT("Player")))
    {
        MainCharacter = Cast<AMainCharacter>(OtherActor);
        if (MainCharacter)
        {
            MainCharacter->getInventoryComponent()->AddItem(ItemID);
            Destroy();
        }
    }
}

void AActiveItemBase::Active()
{

}

