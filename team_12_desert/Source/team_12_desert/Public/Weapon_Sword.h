// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Weapon_Sword.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AWeapon_Sword : public AWeaponBase
{
	GENERATED_BODY()
	
public:
	AWeapon_Sword();
	void BeginPlay() override;
	virtual void Attack() override;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> SwordMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UBoxComponent> MeleeCollisionBox;

	/** 히트박스에 오버랩 감지 시 호출될 함수 */
	UFUNCTION()
	void OnMeleeOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	/** 공격에 이미 감지된 몬스터 리스트 (중복 히트 방지용) */
	TArray<class AMonsterAICharacter*> HitMonsters;
	
};
