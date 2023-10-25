#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TricksterChainedThrowsAddon.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTricksterChainedThrowsAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _resetOnEnteringFlurryInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lacerationPenaltyRangeThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _closeRangeLacerationPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maximumMultiplier;

public:
	UTricksterChainedThrowsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterChainedThrowsAddon) { return 0; }
