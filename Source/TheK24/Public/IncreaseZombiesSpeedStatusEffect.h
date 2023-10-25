#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "IncreaseZombiesSpeedStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIncreaseZombiesSpeedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _zombieSpeedAdditive;

public:
	UIncreaseZombiesSpeedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIncreaseZombiesSpeedStatusEffect) { return 0; }
