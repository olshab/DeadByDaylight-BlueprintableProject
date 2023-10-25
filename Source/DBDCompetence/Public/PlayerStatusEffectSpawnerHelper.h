#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelperInitParams.h"
#include "PlayerStatusEffectSpawnerHelper.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FPlayerStatusEffectSpawnerHelper
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerStatusEffectSpawnerHelperInitParams _initParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UStatusEffect*> _spawnedEffects;

public:
	DBDCOMPETENCE_API FPlayerStatusEffectSpawnerHelper();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusEffectSpawnerHelper) { return 0; }
