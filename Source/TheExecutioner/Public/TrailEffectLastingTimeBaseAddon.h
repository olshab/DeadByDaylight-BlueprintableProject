#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "TrailEffectLastingTimeBaseAddon.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _modifySurvivorTrailEffectLastingTimeEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _trailEffectLastingTimeModifierValue;

public:
	UTrailEffectLastingTimeBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTrailEffectLastingTimeBaseAddon) { return 0; }
