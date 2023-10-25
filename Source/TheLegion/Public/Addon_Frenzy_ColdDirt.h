#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Frenzy_ColdDirt.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_ColdDirt : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<int32, int32> _mapTokenPerChainedHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tokensToReachForActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementSpeedMultiplierModifier;

public:
	UAddon_Frenzy_ColdDirt();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_ColdDirt) { return 0; }
