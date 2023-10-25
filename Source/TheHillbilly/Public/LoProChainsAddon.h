#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "AnimationMontageDescriptor.h"
#include "LoProChainsAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULoProChainsAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _breakPalletMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _halfDamageDurationAfterBreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _doesAddonIncludeBreakableWalls;

public:
	ULoProChainsAddon();
};

FORCEINLINE uint32 GetTypeHash(const ULoProChainsAddon) { return 0; }
