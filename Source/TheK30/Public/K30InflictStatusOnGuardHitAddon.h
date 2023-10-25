#pragma once

#include "CoreMinimal.h"
#include "K30BaseStatusEffectAddon.h"
#include "K30InflictStatusOnGuardHitAddon.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30InflictStatusOnGuardHitAddon : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnGuardHit(ADBDPlayer* player);

public:
	UK30InflictStatusOnGuardHitAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30InflictStatusOnGuardHitAddon) { return 0; }
