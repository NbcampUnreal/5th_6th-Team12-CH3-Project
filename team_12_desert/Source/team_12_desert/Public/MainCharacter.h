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
	int32 getCharacterDamage() const { return BaseDamage * MulDamage; }
	int32 getCharacterArmor() const { return BaseArmor * MulArmor; }
	int32 getMeleeAttackCount() const { return MeleeAttackCount; }
	int32 getRangeAttackCount() const { return RangeAttackCount; }
	int32 getKillCount() const { return KillCount; }

<<<<<<< HEAD
	bool getIsDashSkill() const { return bIsDashSkill; }
	void setIsDashSkill(bool bDash) { bIsDashSkill = bDash; }

	int32 getBaseDamage() const { return BaseDamage; }
	int32 getMulDamage() const { return MulDamage; }
	int32 getBaseArmor() const { return BaseArmor; }
	int32 getMulArmor() const { return MulArmor; }

	void setBaseDamage(int32 Damage) { BaseDamage = Damage; }
	void setMulDamage(float Damage) { MulDamage = Damage; }
	void setBaseArmor(int32 Armor) { BaseArmor = Armor; }
	void setMulArmor(float Armor) { MulArmor = Armor; }
=======
	void setCurrentLevel(int32 val)  {  CurrentLevel=val; }
	void setMaxHP(int32 val)  {  MaxHP = val; }
	void setMaxStamina(int32 val)  {  MaxStamina = val; }
	void setCurrentHP(int32 val)  {  CurrentHP = val; }
	void setCurrentStamina(int32 val)  {  CurrentStamina = val; }
	void setCurrentExperience(int32 val)  {  CurrentExperience = val; }
	void setCharacterDamage(int32 val)  {  CharacterDamage = val; }
	void setCharacterArmor(int32 val)  {  CharacterArmor = val; }
>>>>>>> UI

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
	int32 BaseDamage = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	float MulDamage = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	int32 BaseArmor = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacter")
	float MulArmor = 1.f;

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
	TSubclassOf<class AWeaponBase> RangeWeapon;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponBase> MeleeWeapon;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class AWeaponBase> RangeWeaponActor;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class AWeaponBase> MeleeWeaponActor;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class ASkillBook> mySkillBook;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class ASkillBook> mySkillBookActor;


	UFUNCTION()
	void EquipWeapon();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyCharacter")
	bool bIsDashSkill;

};
