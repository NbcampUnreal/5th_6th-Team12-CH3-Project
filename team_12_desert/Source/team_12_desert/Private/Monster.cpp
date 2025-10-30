#include "Monster.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "MyGameInstance.h"

AMonster::AMonster()
{
    PrimaryActorTick.bCanEverTick = true;
    AIControllerClass = AMonsterAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    // �⺻�� ����
    MaxHealth = 100.0f;
    CurrentHealth = MaxHealth;
    WalkSpeed = 200.0f;
    RotationRateYaw = 720.f;
    AttackDamage = 10.0f;
    AttackRange = 150.0f;
    AttackCooldown = 1.0f;
}

void AMonster::BeginPlay()
{
    Super::BeginPlay();

    CurrentHealth = MaxHealth;

    if (UCharacterMovementComponent* Move = GetCharacterMovement())
    {
        Move->MaxWalkSpeed = WalkSpeed;
        Move->bOrientRotationToMovement = true;
        Move->RotationRate = FRotator(0.f, RotationRateYaw, 0.f);
    }

    bUseControllerRotationYaw = false;
}

void AMonster::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMonster::ApplyDamage(float DamageAmount)
{
    CurrentHealth -= DamageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Monster took %f damage, current health: %f"), DamageAmount, CurrentHealth);
    if (CurrentHealth <= 0.f)
    {
        // GameInstance���� ���� �� ����
        if (UMyGameInstance* GI = Cast<UMyGameInstance>(GetGameInstance()))
        {
            GI->AddMonsterCount(-1);
        }

        // ���� �� 90�� ������
        FRotator DeathRotation = GetActorRotation();
        DeathRotation.Roll += 90.f; // X������ ������ ������ (Roll)
        SetActorRotation(DeathRotation);

        DropItem();

        // ������ �� Destroy
        GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
            {
                Destroy();
            });

    }
}

void AMonster::Attack()
{
    UE_LOG(LogTemp, Warning, TEXT("Monster attack!"));
}

void AMonster::DropItem()
{
    if (!DropItemClass) return;

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    GetWorld()->SpawnActor<AActor>(DropItemClass, GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
}
