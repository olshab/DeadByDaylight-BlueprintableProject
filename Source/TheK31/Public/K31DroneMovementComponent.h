#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameFramework/MovementComponent.h"
#include "StatProperty.h"
#include "DroneRepMovement.h"
#include "DroneDeployDatum.h"
#include "UObject/NoExportTypes.h"
#include "EDroneFlyingHeight.h"
#include "EK31DroneMovementMode.h"
#include "K31DroneMovementComponent.generated.h"

class USceneComponent;
class UCurveFloat;
class AGameStateBase;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeployLocationChangedEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachToCharacterForDeployChangedEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAccelerationChangedEvent, const FVector&, acceleration);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovementBlueprintEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnDeployLocationChangedEvent OnDeployLocationChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAttachToCharacterForDeployChangedEvent OnAttachToCharacterForDeployChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAccelerationChangedEvent OnAccelerationChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FMovementBlueprintEvent OnFlightHeightChangedBlueprintEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FMovementBlueprintEvent OnMovementModeChangedBlueprintEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _rotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _rotationRateStealthMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rotationLerpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minHeightAboveGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxHeightAboveGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _heightAdjustmentMovingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _deployMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _replicationFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _smoothingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxSmoothUpdateDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _noSmoothUpdateDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _deployCharacterSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxTravelDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxDeployTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _gravity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _velocityInterpolationAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _constantSpeedToAccelerationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGameStateBase* _gameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDroneDeployDatum _localDeployDatum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AActor* _interactingActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USceneComponent*> _additionalRotatingComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _updatedComponentOriginalParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReplicatedMovement, meta=(AllowPrivateAccess=true))
	FDroneRepMovement _replicatedMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DeployDatum, meta=(AllowPrivateAccess=true))
	FDroneDeployDatum _repDeployDatum;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedMovement(const FDroneRepMovement& oldRepMovement);

	UFUNCTION(BlueprintCallable)
	void OnRep_DeployDatum(const FDroneDeployDatum& oldDeployDatum);

public:
	UFUNCTION(BlueprintPure)
	bool IsMeshAttachedToCharacterForDeploy() const;

	UFUNCTION(BlueprintPure)
	bool HasReachedDeployLocation() const;

	UFUNCTION(BlueprintPure)
	EDroneFlyingHeight GetTargetFlightHeight() const;

	UFUNCTION(BlueprintPure)
	EK31DroneMovementMode GetMovementMode() const;

	UFUNCTION(BlueprintPure)
	float GetDistanceToTarget() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneMovementComponent) { return 0; }
