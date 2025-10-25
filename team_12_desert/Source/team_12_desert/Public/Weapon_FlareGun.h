// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Weapon_FlareGun.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AWeapon_FlareGun : public AWeaponBase
{
	GENERATED_BODY()
	

public:
	AWeapon_FlareGun();

	virtual void Attack() override;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> FlareGunMesh_0;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> FlareGunMesh_1;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> FlareGunMesh_2;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> FlareGunMesh_3;

};
