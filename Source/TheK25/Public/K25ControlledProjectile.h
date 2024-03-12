#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "K25Projectile.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Engine/NetSerialization.h"
#include "K25ControlledProjectile.generated.h"

class UCameraComponent;
class UStaticMeshComponent;
class USpringArmComponent;
class UK25ControlledProjectileMovementComponent;

UCLASS(Blueprintable)
class AK25ControlledProjectile : public AK25Projectile, public ISpectatingActorLinker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _killerViewProjectileStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpringArmComponent* _killerSpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCameraComponent* _killerCameraPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pitchClampAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maximumYawTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maximumPitchTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _cameraRollSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _cameraRollGoBackSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _cameraMaximumRollDegree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _numbExtraChainsOnControlledProjectileHit;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25ControlledProjectileMovementComponent* _controlledProjectileMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _currentRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _targetRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AngularVelocity, meta=(AllowPrivateAccess=true))
	FVector_NetQuantize _lastAppliedAngularVelocity;

public:
	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_ProcessYawInput(float deltaTime, float scaledInput);

	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_ProcessPitchInput(float deltaTime, float scaledInput);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AngularVelocity();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerPossessProjectileEffects();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25ControlledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25ControlledProjectile) { return 0; }
