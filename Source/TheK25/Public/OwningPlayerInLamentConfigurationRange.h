#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInLamentConfigurationRange.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOwningPlayerInLamentConfigurationRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

public:
	UOwningPlayerInLamentConfigurationRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInLamentConfigurationRange) { return 0; }
