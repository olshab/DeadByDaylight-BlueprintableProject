#pragma once

#include "CoreMinimal.h"
#include "TargetFocusTimer.h"
#include "ECamperDamageState.h"
#include "ChaseUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FChaseUpdateInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTargetFocusTimer ChaseTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorTravelDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerTravelDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECamperDamageState ChaseStartHealthStatus;

public:
	DEADBYDAYLIGHT_API FChaseUpdateInfo();
};

FORCEINLINE uint32 GetTypeHash(const FChaseUpdateInfo) { return 0; }
