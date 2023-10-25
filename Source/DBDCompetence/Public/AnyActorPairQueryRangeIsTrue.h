#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "AnyActorPairQueryRangeIsTrue.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnInRangeChanged(const bool inRange);

public:
	UAnyActorPairQueryRangeIsTrue();
};

FORCEINLINE uint32 GetTypeHash(const UAnyActorPairQueryRangeIsTrue) { return 0; }
