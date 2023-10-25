#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "GameFramework/Actor.h"
#include "DBDGenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K25Gateway.generated.h"

class UCameraComponent;
class UActorComponent;
class UAIPerceptionStimuliSourceComponent;

UCLASS(Blueprintable)
class AK25Gateway : public AActor, public ISpectatingActorLinker, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastZOffet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> _distancePercentLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _survivorGatewayRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumIndicatorVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _indicatorVelocityEasingFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumTimeBeforeTargetLocationMulticast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _gatewayNoiseEventTimeInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _gatewayNoiseEventRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minDistanceFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maxDistanceFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gatewayPlacementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _pitchLevelChangeAngleThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _pitchLevelChangeZoneThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumCameraPitchOrientationAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumCameraPitchOrientationAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxGatewayPossessionDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActorComponent* _visualComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _targetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCameraComponent* _cameraPlacementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsGatewayPossessed, meta=(AllowPrivateAccess=true))
	bool _isGatewayPossessed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsBeingPositionned, Transient, meta=(AllowPrivateAccess=true))
	bool _isBeingPositionned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _possessionTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StartGatewayPossession(FVector possessionLocation, FRotator gatewayRotation);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned);

	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);

	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_SetGatewayOrientation(FRotator rotation);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_EndGatewayPossession();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsGatewayPossessed();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsBeingPositionned();

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_SetGatewayOrientation(FRotator rotation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetGatewayLocation(FVector possessionLocation);

public:
	UFUNCTION(BlueprintPure)
	bool IsGatewayPossessed() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UCameraComponent* GetCameraComponent() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerInvalidGatewayPlacementSFX();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayUnpossessedEffects();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPossessionCancel();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPossessedEffects(const float transitionTime);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPlacementStop();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPlacementStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPlacementCancel();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetKillerVisualVisibility(bool isVisible);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25Gateway();
};

FORCEINLINE uint32 GetTypeHash(const AK25Gateway) { return 0; }
