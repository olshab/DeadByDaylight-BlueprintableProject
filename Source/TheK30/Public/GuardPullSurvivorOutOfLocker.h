#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "DBDTunableRowHandle.h"
#include "GuardPullSurvivorOutOfLocker.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardPullSurvivorOutOfLocker : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _targetSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _healthySurvivorUpdateMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _injuredSurvivorUpdateMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pullOutOfLockerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _snapPositionDistanceOnPullOutHealthy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _snapTime;

public:
	UGuardPullSurvivorOutOfLocker();
};

FORCEINLINE uint32 GetTypeHash(const UGuardPullSurvivorOutOfLocker) { return 0; }
