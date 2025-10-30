#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MonsterAIController.generated.h"

UCLASS()
class TEAM_12_DESERT_API AMonsterAIController : public AAIController
{
    GENERATED_BODY()

public:
    AMonsterAIController();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    //-----------------------
    // ���� ��Ÿ��
    //-----------------------
    FTimerHandle AttackTimerHandle;
    bool bCanAttack;

    //-----------------------
    // AI ����
    //-----------------------
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    APawn* PlayerPawn;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float AcceptanceRadius = 100.f;

public:
    UFUNCTION(BlueprintCallable)
    void AttackPlayer();

    void ResetAttack();
};
