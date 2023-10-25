#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "K32ItemBoxSpeedUpInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32ItemBoxSpeedUpInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _interactionProgressMultiplier;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UK32ItemBoxSpeedUpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxSpeedUpInteraction) { return 0; }
