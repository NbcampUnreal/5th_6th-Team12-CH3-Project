// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "WeaponBase.h"
#include "SkillBook.h"
#include "MyGameState.h"
#include "MyGameInstance.h"
#include "Components/SphereComponent.h"
#include "Monster.h"

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
    bIsDashSkill(false),
    Distance(0)
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
	SkillBookComponent = CreateDefaultSubobject<USkillBookComponent>(TEXT("SkillBookComponent"));

	SkillBookCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SkillBookCollision"));
    SkillBookCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    SkillBookCollision->SetupAttachment(RootComponent);

    // 25.10.27. mpyi _ 찬영님 요청으로 태그 추가(대소문자 주의)
    Tags.Add(FName("Player"));

    SetActorTickEnabled(true);
    SetActorTickInterval(1.0f); 

    SkillBookCollision->OnComponentBeginOverlap.AddDynamic(this, &AMainCharacter::ActivateSkillBook);
    SkillBookCollision->OnComponentEndOverlap.AddDynamic(this, &AMainCharacter::EndActivateSkillBook);
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

    Cast<UMyGameInstance>(GetGameInstance())->PlayerStatLoad();
    Cast<UMyGameInstance>(GetGameInstance())->PlayerHUDApply();
}

void AMainCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	Distance += 1;
    UE_LOG(LogTemp, Display, TEXT("tick in"));
    if (OverlappedActors.Num() > 0)
    {
        UE_LOG(LogTemp, Display, TEXT("tick out"));
        SkillBookComponent->ActionSkill(OverlappedActors, Distance);
    }
    
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

    //if (IsValid(mySkillBook))
    //{
    //    mySkillBookActor = GetWorld()->SpawnActor<ASkillBook>(mySkillBook);
    //    if (mySkillBook)
    //    {
    //        FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
    //        mySkillBookActor->AttachToComponent(GetMesh(), TransformRules, TEXT("SkillSocket"));
    //        mySkillBookActor->SetOwner(this);
    //        mySkillBookActor->SetInstigator(this);
    //    }
    //}
}

void AMainCharacter::ActivateSkillBook(
    UPrimitiveComponent* OverlapPendComp,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult)
{
    if(OtherActor && OtherActor->ActorHasTag(TEXT("Monster")))
    {
        if (AMonster* monster = Cast<AMonster>(OtherActor))
        {
            OverlappedActors.Add(monster);
        }
	}
}

void AMainCharacter::EndActivateSkillBook(UPrimitiveComponent* OverlapPendComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor->ActorHasTag(TEXT("Monster")))
    {
        if (AMonster* monster = Cast<AMonster>(OtherActor))
        {
            OverlappedActors.Remove(monster);
        }
    }
}

//외부에서 체력 회복시킬 때
void AMainCharacter::HealHP(int32 HealAmount)
{
    this->CurrentHP += HealAmount;
    if (CurrentHP > MaxHP)
    {
        CurrentHP = MaxHP;
    }
    Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateHpHud(MaxHP,CurrentHP);
}

// 외부에서 스태미나 회복시킬 때
void AMainCharacter::HealStamina(int32 HealAmount)
{
    this->CurrentStamina += HealAmount;
    if (CurrentStamina > MaxStamina)
    {
        CurrentStamina = MaxStamina;
    }
    Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateStaminaHud(MaxStamina,CurrentStamina);
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

    Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateHpHud(MaxHP, CurrentHP);
}

void AMainCharacter::IncreaseExperience(int32 Experience)
{
    CurrentExperience += Experience;

   if (CurrentExperience >= CurrentLevel * 100)
    {
        CurrentLevel++;
        CurrentExperience = 0;
        Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::SkillUp);
        APlayerController* PC = GetWorld()->GetFirstPlayerController();
        PC->SetShowMouseCursor(true);
    }
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