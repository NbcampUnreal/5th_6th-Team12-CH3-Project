// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

// Sets default values
AMainCharacter::AMainCharacter() :
    CurrentLevel(1),
    MaxHP(100),
    CharacterDamage(10),
    CharacterArmor(0),
    CurrentExperience(0),
    KillCount(0),
    MeleeAttackCount(0),
    RangeAttackCount(0),
    CharacterName(TEXT("Default Name"))
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
    Super::BeginPlay();
    SpawnDefaultController();
    this->CurrentHP = this->MaxHP;
    KillCount = 0;
    MeleeAttackCount = 0;
    RangeAttackCount = 0;
}

//외부에서 체력 회복시킬 때
void AMainCharacter::HealHP(int32 HealAmount)
{
    this->CurrentHP += HealAmount;
    if (CurrentHP > MaxHP)
    {
        CurrentHP = MaxHP;
    }
}

// 외부에서 스태미나 회복시킬 때
void AMainCharacter::HealStamina(int32 HealAmount)
{
    this->CurrentStamina += HealAmount;
    if (CurrentStamina > MaxStamina)
    {
        CurrentStamina = MaxStamina;
    }
}

void AMainCharacter::MeleeAttack()
{
    this->IncreaseAttackCount(MELEE_ATTACK);
}

void AMainCharacter::RangeAttack()
{
    this->IncreaseAttackCount(RANGE_ATTACK);
}

void AMainCharacter::Hit(int32 Damage, AActor* ByWho)
{
    int32 EffectiveDamage = Damage - CharacterArmor;

    /// 방어력이 아무리 높아도 최소 대미지는 입도록 설정
    if (EffectiveDamage <= 0)
    {
        EffectiveDamage = 1;
    }

    CurrentHP -= EffectiveDamage;
    if (CurrentHP <= 0)
    {
        CurrentHP = 0;
    }
}

void AMainCharacter::IncreaseExperience(int32 Experience)
{
    CurrentExperience += Experience;

    //if (CurrentExperience >= CurrentLevel * 100)
    //{
    //    CurrentLevel++;
    //    CurrentExperience = 0;

    //}
}

void AMainCharacter::IncreaseKillCount()
{
    KillCount++;
}

void AMainCharacter::IncreaseAttackCount(ATTACK_TYPE AttackType)
{
    switch (AttackType)
    {
    case MELEE_ATTACK:
        MeleeAttackCount++;
        break;

    case RANGE_ATTACK:
        RangeAttackCount++;
        break;
    default:
        break;
    }

}