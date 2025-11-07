// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageText.h"
#include "Components/WidgetComponent.h"
#include "DamagePopupActor.generated.h"

UCLASS()
class TEAM_12_DESERT_API ADamagePopupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamagePopupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void InitDamage(float damage);
	UPROPERTY(EditAnywhere, Category = "MyHudSetting")
	UWidgetComponent* widgetComp;


	UPROPERTY(EditAnywhere, Category = "MyHudSetting")
	UDamageText* damageWidgetInstance;

};
