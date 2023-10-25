#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "NearUndestroyedPallet.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNearUndestroyedPallet : public URangeBasedCondition
{
	GENERATED_BODY()

public:
	UNearUndestroyedPallet();
};

FORCEINLINE uint32 GetTypeHash(const UNearUndestroyedPallet) { return 0; }
