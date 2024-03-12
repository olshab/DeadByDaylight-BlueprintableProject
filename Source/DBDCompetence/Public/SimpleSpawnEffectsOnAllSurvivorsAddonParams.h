#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddonParams.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _effectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _customParam;

public:
	DBDCOMPETENCE_API FSimpleSpawnEffectsOnAllSurvivorsAddonParams();
};

FORCEINLINE uint32 GetTypeHash(const FSimpleSpawnEffectsOnAllSurvivorsAddonParams) { return 0; }
