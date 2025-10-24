// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class TEAM_12_DESERT_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Attack();
	TObjectPtr<class USceneComponent> SceneComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WeaponSetting")
	TObjectPtr<class USkeletalMeshComponent> WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WeaponSetting")
	TObjectPtr<class USceneComponent> MuzzleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponSetting")
	TObjectPtr<class UAnimMontage> FireMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponSetting")
	TSubclassOf<class ABulletBase> Bullet;
	




};
