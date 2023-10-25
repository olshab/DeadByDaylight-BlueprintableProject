#pragma once

#include "CoreMinimal.h"
#include "OnChargingStarted.h"
#include "OnChargingStopped.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "OnProjectileSummoned.h"
#include "K26SpawnCrowProjectileChargeableInteractionDefinition.generated.h"

class AK26AimingGuide;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;
class ADBDPlayer;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26SpawnCrowProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnChargingStarted OnChargingStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnChargingStopped OnChargingStopped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnProjectileSummoned OnProjectileSummoned;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chargeCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _summonCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _projectileHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _projectileSummonDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _cooldownGracePeriodPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _globalSpawnCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pathDistanceCheckAttempts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK26AimingGuide> _aimingGuideClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK26AimingGuide* _local_aimingGuide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isConfirmButtonPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26AmmoHandlerComponent* _ammoHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PathHandlerComponent* _pathHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PowerStatusHandlerComponent* _statusHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _firedFullyChargedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isWaitingForSummonAcknowledgement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _globalCooldownMovementSpeedCurve;

protected:
	UFUNCTION(BlueprintCallable)
	void SetSummonCooldown();

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler);

protected:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_PlaceProjectileWithPath(ASlasherPlayer* killer, const FVector& projectileSpawnPoint, const float killerLocalTime);

private:
	UFUNCTION(BlueprintCallable)
	void OnSummonCooldownComplete();

	UFUNCTION(BlueprintCallable)
	void OnConfirmButtonPressed(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnK26CrowSummoned(const ASlasherPlayer* killer, const int32 remainingAmmo, const int32 maxAmmo);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnK26CrowSummonAttemptAcknowledged();

private:
	UFUNCTION(BlueprintCallable)
	void Local_OnGlobalCooldownDone(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintPure)
	bool IsSummonOnCooldown() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFullyCharged(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_LocalOnSummonCooldownComplete(const int32 amountOfAmmoLeft, const bool isInteractionActive);

	UFUNCTION(BlueprintCallable)
	bool CanSummonCrowOnceFullyCharged();

	UFUNCTION(BlueprintCallable)
	bool CanSummonCrow();

public:
	UK26SpawnCrowProjectileChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26SpawnCrowProjectileChargeableInteractionDefinition) { return 0; }
