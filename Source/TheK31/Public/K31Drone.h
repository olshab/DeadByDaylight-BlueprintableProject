#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDGenericTeamAgentInterface.h"
#include "K31Drone.generated.h"

class UK31DroneFlightController;
class UK31DroneMovementComponent;
class UDeployDroneInteraction;
class ADBDPlayer;
class USceneComponent;
class UDBDSkeletalMeshComponentBudgeted;
class UAuthoritativePoolableActorComponent;
class UK31DroneLaserController;
class UMapActorComponent;
class UChildActorComponent;
class UK31DroneHackableAvoidanceSensor;
class UStaticMeshComponent;
class UK31DroneOwnershipComponent;
class UK31DroneStateController;
class UK31DroneDebugComponent;
class UK31DroneZoneComponent;
class UK31TrapProximitySensor;
class UK31DronePlacementRecaller;
class UK31DroneHackableComponent;
class UDBDNavModifierComponent;
class UK31DroneDangerPredictionComponent;
class ULocalPlayerTrackerComponent;

UCLASS(Blueprintable)
class THEK31_API AK31Drone : public AInteractable, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _movingRootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChildActorComponent* _laserChildActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneLaserController* _laserController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _droneMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _activeZoneMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneMovementComponent* _movementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneFlightController* _flightController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolableActorComponent* _poolableActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK31DroneOwnershipComponent* _ownershipComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneStateController* _stateController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneDebugComponent* _debugComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneZoneComponent* _droneZoneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31TrapProximitySensor* _trapProximitySensor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DronePlacementRecaller* _placementRecallerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneHackableComponent* _hackableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneHackableAvoidanceSensor* _avoidanceSensor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDeployDroneInteraction* _deployInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavModifierComponent* _navModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31DroneDangerPredictionComponent* _dangerPredictionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _droneMapActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _lastOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalPlayerTrackerComponent* _localPlayerTracker;

private:
	UFUNCTION(BlueprintCallable)
	void OnAcquiredChanged(const bool acquired);

	UFUNCTION(BlueprintCallable)
	void Native_OnLocallyObservedChanged();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_OnRevertToScoutingCurrentChargeChanged(float chargePercentage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_OnIsHackableStateChanged(bool isHackable);

public:
	AK31Drone();
};

FORCEINLINE uint32 GetTypeHash(const AK31Drone) { return 0; }
