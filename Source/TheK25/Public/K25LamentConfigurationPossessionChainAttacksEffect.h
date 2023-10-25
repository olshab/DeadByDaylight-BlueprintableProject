#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "K25LamentConfigurationPossessionChainAttacksEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25LamentConfigurationPossessionChainAttacksEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _timeBetweenChainTargettingAttempt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _numberOfChainsToTriggerTowardsSurvivor;

public:
	UK25LamentConfigurationPossessionChainAttacksEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK25LamentConfigurationPossessionChainAttacksEffect) { return 0; }
