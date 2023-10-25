#pragma once

#include "CoreMinimal.h"
#include "LingeringMultiStateTagStatusEffect.h"
#include "K29GateBlockerStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK29GateBlockerStatusEffect : public ULingeringMultiStateTagStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _escapeZoneBoxComponentTagName;

public:
	UK29GateBlockerStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK29GateBlockerStatusEffect) { return 0; }
