// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

enum ATTACK_TYPE
{
	MELEE_ATTACK,
	RANGE_ATTACK
};

UCLASS()
class TEAM_12_DESERT_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()
	// 함수 모음
public:
	AMainCharacter();
	virtual void MeleeAttack();
	virtual void RangeAttack();
	virtual void Hit(int32 Damage, AActor* ByWho);
	void IncreaseExperience(int32 Experience);
	void IncreaseKillCount();
	void IncreaseAttackCount(ATTACK_TYPE AttackType);

	int32 getCurrentLevel() const { return CurrentLevel; }
	int32 getMaxHP() const { return MaxHP; }
	int32 getMaxStamina() const { return MaxStamina; }
	int32 getCurrentHP() const { return CurrentHP; }
	int32 getCurrentStamina() const { return CurrentStamina; }
	int32 getCurrentExperience() const { return CurrentExperience; }
	int32 getCharacterDamage() const { return CharacterDamage; }
	int32 getCharacterArmor() const { return CharacterArmor; }
	int32 getMeleeAttackCount() const { return MeleeAttackCount; }
	int32 getRangeAttackCount() const { return RangeAttackCount; }
	int32 getKillCount() const { return KillCount; }

	void setMeleeAttackCount(int32 Count) { MeleeAttackCount = Count; }
	void setRangeAttackCount(int32 Count) { RangeAttackCount = Count; }

	UFUNCTION()
	void HealHP(int32 HealAmount);
	UFUNCTION()
	void HealStamina(int32 HealAmount);
protected:
	virtual void BeginPlay() override;

	// 변수모음
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyCharacter")
	int32 CurrentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 CharacterDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 CharacterArmor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyCharacter")
	int32 KillCount;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 CurrentHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 CurrentStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 CurrentExperience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	FString CharacterName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyCharacter")
	int32 MeleeAttackCount;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyCharacter")
	int32 RangeAttackCount;

	// 무기
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponBase> Weapon;
	UPROPERTY()
	TObjectPtr<class AWeaponBase> WeaponActor;

};
