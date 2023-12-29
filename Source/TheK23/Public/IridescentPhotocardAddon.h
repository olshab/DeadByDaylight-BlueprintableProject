#pragma once

#include "CoreMinimal.h"
#include "TricksterChainedThrowsAddon.h"
#include "IridescentPhotocardAddon.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UIridescentPhotocardAddon : public UTricksterChainedThrowsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _percentageGainedOnHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maxConsecutiveHits;

public:
	UIridescentPhotocardAddon();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentPhotocardAddon) { return 0; }
