#pragma once

#include "CoreMinimal.h"
#include "ObliviousEffect.h"
#include "TimedObliviousEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTimedObliviousEffect : public UObliviousEffect
{
	GENERATED_BODY()

public:
	UTimedObliviousEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTimedObliviousEffect) { return 0; }
