#include "Monster.h"  
#include "CreatureMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ACreatureMonster : public AMonster
{
	GENERATED_BODY()

public:
	ACreatureMonster();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Attack() override; // 공격 커스터마이징
};