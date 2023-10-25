#pragma once

#include "CoreMinimal.h"
#include "AIDetectedStimulus.h"
#include "TargetMoveAwayToFastInfo.generated.h"

USTRUCT(BlueprintType)
struct FTargetMoveAwayToFastInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AccumulatedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CooldownUntilTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIDetectedStimulus Stimulus;

public:
	DBDBOTS_API FTargetMoveAwayToFastInfo();
};

FORCEINLINE uint32 GetTypeHash(const FTargetMoveAwayToFastInfo) { return 0; }
