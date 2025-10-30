#include "SpiderMonster.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"

ASpiderMonster::ASpiderMonster()
{
    PrimaryActorTick.bCanEverTick = true;

    // 기본 스탯
    MaxHealth = 50.f;
    CurrentHealth = MaxHealth;

    WalkSpeed = 750.f;
    RotationRateYaw = 800.f;

    AttackRange = 50.f;
    AttackCooldown = 0.5f;
    AttackDamage = 15.f;

    bCanAttack = true;

    // AIController 설정
    AIControllerClass = AMonsterAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    //태그
    Tags.Add(FName("Monster"));

    bIsClimbingWall = false;
    GetCharacterMovement()->GravityScale = 1.0f;
    GetCharacterMovement()->MaxWalkSpeed = 300.f;
}

void ASpiderMonster::BeginPlay()
{
    Super::BeginPlay();

    CurrentHealth = MaxHealth;

    if (UCharacterMovementComponent* Move = GetCharacterMovement())
    {
        Move->MaxWalkSpeed = WalkSpeed;
        Move->bOrientRotationToMovement = true;
        Move->RotationRate = FRotator(0.f, RotationRateYaw, 0.f);
    }

    TargetPlayer = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    GetWorldTimerManager().SetTimer(
        ChaseTimerHandle,
        this,
        &ASpiderMonster::ChasePlayer,
        1.0f,
        true
    );
}

void ASpiderMonster::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!TargetPlayer) return;

    FHitResult Hit;
    if (DetectWall(Hit))
    {
        if (!bIsClimbingWall)
            StartClimbing(Hit.Normal);
    }
    else if (bIsClimbingWall)
    {
        StopClimbing();
    }

    if (bIsClimbingWall)
    {
        FVector ToPlayer = (TargetPlayer->GetActorLocation() - GetActorLocation()).GetSafeNormal();
        FVector AlongWall = FVector::VectorPlaneProject(ToPlayer, WallNormal);
        AddMovementInput(AlongWall, 1.0f);
    }
}

bool ASpiderMonster::DetectWall(FHitResult& OutHit)
{
    FVector Start = GetActorLocation();
    FVector Forward = GetActorForwardVector();
    FVector End = Start + Forward * WallDetectDistance;

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        OutHit,
        Start, End,
        ECC_Visibility,
        Params
    );


    return bHit && OutHit.bBlockingHit;
}

void ASpiderMonster::StartClimbing(const FVector& Normal)
{
    bIsClimbingWall = true;
    WallNormal = Normal;

    GetCharacterMovement()->GravityScale = 0.0f;
    GetCharacterMovement()->Velocity = FVector::ZeroVector;
    GetCharacterMovement()->MaxWalkSpeed = ClimbSpeed;

    FRotator NewRot = Normal.Rotation() + FRotator(0, 180.f, 0);
    SetActorRotation(NewRot);
}

void ASpiderMonster::StopClimbing()
{
    bIsClimbingWall = false;
    GetCharacterMovement()->GravityScale = 1.0f;
    GetCharacterMovement()->MaxWalkSpeed = 300.f;
}

void ASpiderMonster::ChasePlayer()
{
    if (!TargetPlayer) return;
    AAIController* AI = Cast<AAIController>(GetController());
    if (AI && !bIsClimbingWall)
    {
        AI->MoveToActor(TargetPlayer, 100.f);
    }
}


void ASpiderMonster::AttackPlayer()
{
    bCanAttack = false;
    UE_LOG(LogTemp, Warning, TEXT("[SpiderMonster] Attack! Damage: %.1f"), AttackDamage);

    GetWorld()->GetTimerManager().SetTimer(
        AttackTimerHandle, this, &ASpiderMonster::ResetAttack, AttackCooldown, false);
}

void ASpiderMonster::ResetAttack()
{
    bCanAttack = true;
}

void ASpiderMonster::ApplyDamage(float DamageAmount)
{
    CurrentHealth -= DamageAmount;

    if (CurrentHealth <= 0.f)
    {
        DropItem();
        // 주으면 템 떨구고 180도 회전
        FRotator CurrentRotation = GetActorRotation();
        FRotator TargetRotation = CurrentRotation + FRotator(0.f, 180.f, 0.f);
        SetActorRotation(TargetRotation);
        // 잠시 후 사라짐
        GetWorld()->GetTimerManager().SetTimer(
            AttackTimerHandle, this, &ASpiderMonster::DestroyMonster, 0.5f, false);

    }
}

void ASpiderMonster::DropItem()
{
    if (!DropItemClass) return;

    const FVector Loc = GetActorLocation();
    const FRotator Rot = FRotator::ZeroRotator;
    GetWorld()->SpawnActor<AActor>(DropItemClass, Loc, Rot);
}

void ASpiderMonster::DestroyMonster()
{
    Destroy();
}