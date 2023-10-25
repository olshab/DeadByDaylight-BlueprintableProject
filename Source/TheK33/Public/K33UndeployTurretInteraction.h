#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K33UndeployTurretInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33UndeployTurretInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _cancelMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _interruptedMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cancelUndeployDuration;

public:
	UK33UndeployTurretInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33UndeployTurretInteraction) { return 0; }
