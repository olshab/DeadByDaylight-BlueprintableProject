#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ActivateOnEventTimedStatusEffect.h"
#include "K25ChainStrikeImmunityEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25ChainStrikeImmunityEffect : public UActivateOnEventTimedStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chainStrikeImmunityDuration;

public:
	UK25ChainStrikeImmunityEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeImmunityEffect) { return 0; }
