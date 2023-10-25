#pragma once

#include "CoreMinimal.h"
#include "ChargeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FChargeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float ChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool BypassSkillCheckFail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOneTimeIncrease;

public:
	DEADBYDAYLIGHT_API FChargeData();
};

FORCEINLINE uint32 GetTypeHash(const FChargeData) { return 0; }
