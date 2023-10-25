#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K28TeleportTarget.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AnimationMontageDescriptor.h"
#include "CustomLockerOutlineOverride.h"
#include "K28LockerComponent.generated.h"

class AK28LockerCosmeticHelperActor;
class UBaseLockerInteraction;
class UK28SurvivorLockerAbductionInteraction;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28LockerComponent : public UActorComponent, public IK28TeleportTarget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AK28LockerCosmeticHelperActor* _lockerCosmeticHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aiWarningSoundTimeInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aiWarningSoundRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToTriggerWarningReveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minDistanceFromHookedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minDistanceFromKillerForTeleportationEligibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _lockerShakeTeleportAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _lockerTeleportCompletedAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _lockerTeleportationAbductionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UBaseLockerInteraction>> _lockerInteractionClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK28LockerCosmeticHelperActor> _lockerCosmeticHelperClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28SurvivorLockerAbductionInteraction> _lockerGrabOverridingClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UBaseLockerInteraction>> _lockerInteractionClassesToOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FCustomLockerOutlineOverride> _lockedOutlineOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxSqrtDistanceForCluster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDotProductForCluster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _lockerLineTraceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _abductionCameraOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _killer;

public:
	UK28LockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockerComponent) { return 0; }
