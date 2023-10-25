#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInSpiritHuskRange.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UOwningPlayerInSpiritHuskRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInSpiritHuskRange) { return 0; }
