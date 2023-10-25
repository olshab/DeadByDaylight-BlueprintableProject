#pragma once

#include "CoreMinimal.h"
#include "K30BaseStatusEffectAddon.h"
#include "EGuardHuntEndReason.h"
#include "K30InflictStatusOnEndHuntAddon.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30InflictStatusOnEndHuntAddon : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EGuardHuntEndReason> _huntEndReasonsToApplyEffect;

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnEndHunt(ADBDPlayer* player, EGuardHuntEndReason huntEndReason);

public:
	UK30InflictStatusOnEndHuntAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30InflictStatusOnEndHuntAddon) { return 0; }
