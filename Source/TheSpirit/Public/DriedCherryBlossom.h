#pragma once

#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.h"
#include "Templates/SubclassOf.h"
#include "DriedCherryBlossom.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _spiritDriedCherryBlossomStatusEffectClass;

public:
	UDriedCherryBlossom();
};

FORCEINLINE uint32 GetTypeHash(const UDriedCherryBlossom) { return 0; }
