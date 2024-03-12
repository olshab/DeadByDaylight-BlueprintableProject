#pragma once

#include "CoreMinimal.h"
#include "EventTrackerObjectiveMilestone.generated.h"

USTRUCT(BlueprintType)
struct FEventTrackerObjectiveMilestone
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AdditiveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NeededProgression;

public:
	DEADBYDAYLIGHT_API FEventTrackerObjectiveMilestone();
};

FORCEINLINE uint32 GetTypeHash(const FEventTrackerObjectiveMilestone) { return 0; }
