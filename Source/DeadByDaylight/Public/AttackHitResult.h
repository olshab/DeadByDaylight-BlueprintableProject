#pragma once

#include "CoreMinimal.h"
#include "AttackHitResult.generated.h"

class ADBDPlayer;
class UDBDAttack;

USTRUCT(BlueprintType)
struct FAttackHitResult
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* Attacker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDAttack* Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBasicAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CosmeticOnly;

public:
	DEADBYDAYLIGHT_API FAttackHitResult();
};

FORCEINLINE uint32 GetTypeHash(const FAttackHitResult) { return 0; }
