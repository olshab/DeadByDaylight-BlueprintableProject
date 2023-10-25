#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K28KillerLockerState.h"
#include "Templates/SubclassOf.h"
#include "K28KillerLockerComponent.generated.h"

class ADBDPlayer;
class UCurveFloat;
class AAnimationFollowerActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28KillerLockerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _targetLockerFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _fovChangeTeleportationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fovChangeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LockerState_Replicated, Transient, meta=(AllowPrivateAccess=true))
	FK28KillerLockerState _lockerState_replicated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AAnimationFollowerActor> _extraArmsAnimationFollowerActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AAnimationFollowerActor* _extraArmsAnimationFollowerActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeBetweenAttemptTrigger;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_LockerState_Replicated();

	UFUNCTION(BlueprintCallable)
	void OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28KillerLockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerLockerComponent) { return 0; }
