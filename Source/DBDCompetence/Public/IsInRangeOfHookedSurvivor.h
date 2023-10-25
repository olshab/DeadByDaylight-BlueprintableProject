#pragma once

#include "CoreMinimal.h"
#include "HookedSurvivorRangeBaseCondition.h"
#include "IsInRangeOfHookedSurvivor.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsInRangeOfHookedSurvivor : public UHookedSurvivorRangeBaseCondition
{
	GENERATED_BODY()

public:
	UIsInRangeOfHookedSurvivor();
};

FORCEINLINE uint32 GetTypeHash(const UIsInRangeOfHookedSurvivor) { return 0; }
