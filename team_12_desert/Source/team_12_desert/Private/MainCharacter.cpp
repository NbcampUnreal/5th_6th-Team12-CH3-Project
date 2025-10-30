// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "WeaponBase.h"

// Sets default values
AMainCharacter::AMainCharacter() :
    CurrentLevel(1),
    MaxHP(100),
    BaseDamage(10),
    BaseArmor(0),
    MulDamage(1.0f),
    MulArmor(1.0f),
    CurrentExperience(0),
    MaxStamina(100),
    CurrentStamina(100),
    KillCount(0),
    MeleeAttackCount(0),
    RangeAttackCount(0),
    CharacterName(TEXT("Default Name")),
    bIsDashSkill(false)
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // 25.10.27. mpyi _ ������ ��û���� �±� �߰�(��ҹ��� ����)
    Tags.Add(FName("Player"));
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

    EquipWeapon();
}

void AMainCharacter::EquipWeapon()
{
    if (IsValid(RangeWeapon))
    {
        RangeWeaponActor = GetWorld()->SpawnActor<AWeaponBase>(RangeWeapon);
        if (RangeWeapon)
        {
            FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
            RangeWeaponActor->AttachToComponent(GetMesh(), TransformRules, TEXT("WeaponSocket"));
            RangeWeaponActor->SetOwner(this);
            RangeWeaponActor->SetInstigator(this);
        }
    }

    if (IsValid(MeleeWeapon))
    {
        MeleeWeaponActor = GetWorld()->SpawnActor<AWeaponBase>(MeleeWeapon);
        if (MeleeWeapon)
        {
            FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
            MeleeWeaponActor->AttachToComponent(GetMesh(), TransformRules, TEXT("WeaponSocket"));
            MeleeWeaponActor->SetOwner(this);
            MeleeWeaponActor->SetInstigator(this);
        }
    }
}

//�ܺο��� ü�� ȸ����ų ��
void AMainCharacter::HealHP(int32 HealAmount)
{
    this->CurrentHP += HealAmount;
    if (CurrentHP > MaxHP)
    {
        CurrentHP = MaxHP;
    }
}

// �ܺο��� ���¹̳� ȸ����ų ��
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
    int32 EffectiveDamage = Damage - getCharacterArmor();

    /// ������ �ƹ��� ���Ƶ� �ּ� ������� �Ե��� ����
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