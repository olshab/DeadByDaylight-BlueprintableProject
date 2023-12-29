#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ActivateOnEventTimedStatusEffect.h"
#include "KillerRevealedBySnowballTimedEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API UKillerRevealedBySnowballTimedEffect : public UActivateOnEventTimedStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _effectDuration;

public:
	UKillerRevealedBySnowballTimedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UKillerRevealedBySnowballTimedEffect) { return 0; }
