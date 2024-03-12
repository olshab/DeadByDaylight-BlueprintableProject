#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TormentMode_16.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_16 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _agonyBlindessStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blindnessDuration;

public:
	UAddon_TormentMode_16();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TormentMode_16) { return 0; }
