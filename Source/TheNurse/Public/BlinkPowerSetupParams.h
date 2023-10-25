#pragma once

#include "CoreMinimal.h"
#include "BlinkPowerSetupParams.generated.h"

class UTimerObject;

USTRUCT(BlueprintType)
struct FBlinkPowerSetupParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTimerObject* ChainBlinkTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTimerObject* CooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTimerObject* RechargeTimer;

public:
	THENURSE_API FBlinkPowerSetupParams();
};

FORCEINLINE uint32 GetTypeHash(const FBlinkPowerSetupParams) { return 0; }
