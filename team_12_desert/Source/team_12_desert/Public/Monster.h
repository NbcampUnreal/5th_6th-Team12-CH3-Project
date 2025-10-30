#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"

UCLASS()
class TEAM_12_DESERT_API AMonster : public ACharacter
{
    GENERATED_BODY()

public:
    AMonster();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    //-----------------------
    // 스탯
    //-----------------------
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float MaxHealth;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    float CurrentHealth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float WalkSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float RotationRateYaw;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float AttackDamage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float AttackRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float AttackCooldown;

    //-----------------------
    // 드랍
    //-----------------------
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TSubclassOf<AActor> DropItemClass;

    //-----------------------
    // 함수
    //-----------------------
    UFUNCTION(BlueprintCallable)
    virtual void ApplyDamage(float DamageAmount);

    UFUNCTION(BlueprintCallable)
    virtual void Attack();

    UFUNCTION(BlueprintCallable)
    virtual void DropItem();
};
