#pragma once

#include "CoreMinimal.h"
#include "K30ApplyStatusOnWakeUpAddon.h"
#include "Templates/SubclassOf.h"
#include "K30Addon17.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30Addon17 : public UK30ApplyStatusOnWakeUpAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceForScreams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dealyForScreams;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnMakeSurvivorScream(ADBDPlayer* player, const float lifetime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ADBDPlayer* survivorPlayer, const float screamRevealDuration);

public:
	UK30Addon17();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon17) { return 0; }
