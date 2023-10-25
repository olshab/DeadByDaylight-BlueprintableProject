#pragma once

#include "CoreMinimal.h"
#include "BaseFrenzyMixtapeAddon.h"
#include "Addon_Frenzy_FumingMixTape.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_FumingMixTape : public UBaseFrenzyMixtapeAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _regressionModifier;

public:
	UAddon_Frenzy_FumingMixTape();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_FumingMixTape) { return 0; }
