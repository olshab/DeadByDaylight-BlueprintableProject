#pragma once

#include "CoreMinimal.h"
#include "K28KillerExitLockerInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K28KillerExitLockerWithSurvivorInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28KillerExitLockerWithSurvivorInteraction : public UK28KillerExitLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _waitTimeBeforeSettingIntoCarryState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _montageFromTeleportation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _montageFromAbduction;

public:
	UK28KillerExitLockerWithSurvivorInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerExitLockerWithSurvivorInteraction) { return 0; }
