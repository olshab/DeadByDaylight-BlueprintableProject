#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "StartDemonModeInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEONI_API UStartDemonModeInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YawAdjustTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor DemonModeActivationMontage;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerOwner(const ADBDPlayer* owner);

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UStartDemonModeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UStartDemonModeInteraction) { return 0; }
