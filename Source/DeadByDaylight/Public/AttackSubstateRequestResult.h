#pragma once

#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "AttackSubstateRequestResult.generated.h"

USTRUCT(BlueprintType)
struct FAttackSubstateRequestResult
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate RequestedNextSubstate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate ServerNextSubstate;

public:
	DEADBYDAYLIGHT_API FAttackSubstateRequestResult();
};

FORCEINLINE uint32 GetTypeHash(const FAttackSubstateRequestResult) { return 0; }
