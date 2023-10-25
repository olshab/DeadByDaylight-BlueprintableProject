#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "PlayerHitCosmeticParams.generated.h"

class APawn;
class ACamperPlayer;

USTRUCT(BlueprintType)
struct FPlayerHitCosmeticParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<APawn> Attacker;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ACamperPlayer> Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackType AttackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CausedKO;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsWeaponHit;

public:
	DEADBYDAYLIGHT_API FPlayerHitCosmeticParams();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerHitCosmeticParams) { return 0; }
