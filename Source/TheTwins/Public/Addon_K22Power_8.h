#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_8.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_8 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorDestroyTwinMaxChargeAdditiveEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _increaseDestroyTwinTime;

public:
	UAddon_K22Power_8();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_8) { return 0; }
