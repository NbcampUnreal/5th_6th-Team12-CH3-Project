// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBook.h"
#include "Components/SphereComponent.h"
#include "SkillBase.h"


// Sets default values
ASkillBook::ASkillBook()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Distance = 0.0f;
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Collision->SetupAttachment(Scene);

	Collision->OnComponentBeginOverlap.AddDynamic(this, &ASkillBook::OnItemOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &ASkillBook::OnItemEndOverlap);

	MainCharacter = nullptr;
}

void ASkillBook::setOwnerCharacter(TObjectPtr<class AMainCharacter> Character)
{
	MainCharacter = Character;
}

void ASkillBook::OnItemOverlap(UPrimitiveComponent* OverlapPendComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(TEXT("Monster")))
	{
		ActivateItem(OtherActor);
	}
}

void ASkillBook::OnItemEndOverlap(UPrimitiveComponent* OverlapPendComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyInde)
{
	if (OtherActor && OtherActor->ActorHasTag(TEXT("Monster")))
	{
		DeactivateItem(OtherActor);
	}
}



void ASkillBook::ActivateItem(TObjectPtr<AActor> Actor)
{
	OverlappedActors.Add(Actor);
}

void ASkillBook::DeactivateItem(TObjectPtr<AActor> Actor)
{
	OverlappedActors.Remove(Actor);
}

void ASkillBook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Distance += 1 * DeltaTime;
	if (FMath::IsNearlyZero(FMath::Fmod(Distance, 1.0f), KINDA_SMALL_NUMBER))
	{
		ActionSkill(OverlappedActors, Distance);
	}
}

void ASkillBook::ActionSkill(TArray<AActor*> Actors, float time)
{
	if (SkillList.Num() > 0)
	{
		for (TObjectPtr<ASkillBase> Skill : SkillList)
		{
			if (Skill && GetOwner() != nullptr)
			{
				
				Skill->ActionSkill(Actors, time, GetOwner()->GetActorLocation());
			}
		}
	}
}

void ASkillBook::AddSkill(TObjectPtr<ASkillBase> NewSkill)
{
	SkillList.Add(NewSkill);
	if (GetOwner() != nullptr)
	{
		NewSkill->AttachSkill(MainCharacter);
	}
}

void ASkillBook::DeleteSkill(TObjectPtr<class ASkillBase> SkillToDelete)
{
	SkillList.Remove(SkillToDelete);
	if (GetOwner() != nullptr)
	{
		SkillToDelete->DetachSkill(MainCharacter);
	}
}

