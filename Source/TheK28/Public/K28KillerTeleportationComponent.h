#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DistanceCheckPawnLocationOverride.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K28SecondaryCameraMovementData.h"
#include "TagStateBool.h"
#include "AnimationMontageDescriptor.h"
#include "K28KillerTeleportationComponent.generated.h"

class AActor;
class ADBDPlayer;
class UCurveFloat;
class UK28LockerComponent;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28KillerTeleportationComponent : public UActorComponent, public IDistanceCheckPawnLocationOverride
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _teleportationSpeed_DayCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportationSpeed_NightCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportationTimeForSurvivorGrab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _survivorPanicInLockerAnimationMontageDescriptor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isTeleporting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _defaultTeleportationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _grabTeleportationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _actorsHiddenDuringTeleport;

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerFinishedEnteringLocker(ADBDPlayer* playerThatWasInLocker, ADBDPlayer* playerNowInLocker);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportToLockerStart(FK28SecondaryCameraMovementData cameraMovementData, UK28LockerComponent* lockerBeingTeleportedTo, ACamperPlayer* survivorToGrab);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportToLockerEnd(UK28LockerComponent* lockerTeleportedTo, ACamperPlayer* survivorInLocker);

	UFUNCTION(BlueprintCallable)
	void Local_OnTeleportCollisionOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Local_OnTeleportCollisionOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28KillerTeleportationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerTeleportationComponent) { return 0; }
