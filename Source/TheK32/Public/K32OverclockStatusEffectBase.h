#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "K32OverclockStatusEffectBase.generated.h"

class APallet;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK32OverclockStatusEffectBase : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _overheatStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _overheatDuration;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DestroyPallet(APallet* pallet, ASlasherPlayer* killer) const;

public:
	UK32OverclockStatusEffectBase();
};

FORCEINLINE uint32 GetTypeHash(const UK32OverclockStatusEffectBase) { return 0; }
