#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInTotemRange.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UOwningPlayerInTotemRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInTotemRange) { return 0; }
