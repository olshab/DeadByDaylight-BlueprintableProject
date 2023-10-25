#pragma once

#include "CoreMinimal.h"
#include "ECamperDamageState.h"
#include "CamperHealResult.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FCamperHealResult
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECamperDamageState PreviousDamageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECamperDamageState CurrentDamageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 HealAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ADBDPlayer*> Healers;

public:
	DEADBYDAYLIGHT_API FCamperHealResult();
};

FORCEINLINE uint32 GetTypeHash(const FCamperHealResult) { return 0; }
