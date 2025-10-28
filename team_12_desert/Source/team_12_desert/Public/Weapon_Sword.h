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

	/** ��Ʈ�ڽ��� ������ ���� �� ȣ��� �Լ� */
	UFUNCTION()
	void OnMeleeOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	/** ���ݿ� �̹� ������ ���� ����Ʈ (�ߺ� ��Ʈ ������) */
	TArray<class AMonsterAICharacter*> HitMonsters;
	
};
