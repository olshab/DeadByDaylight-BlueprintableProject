#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "EFireHarpoonRifleAimingInteractionSubState.h"
#include "FireHarpoonRifleInteraction.generated.h"

class AHarpoonProjectile;
class UCurveFloat;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UFireHarpoonRifleInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHitPlayer);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireHarpoon);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFireHarpoon OnFireHarpoon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHitPlayer OnHitPlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	EFireHarpoonRifleAimingInteractionSubState _aimingSubState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AHarpoonProjectile* _harpoon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _collector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightZoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightMousePitchScaleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightMouseYawScaleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightGamepadPitchScaleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightGamepadYawScaleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _aimDownSightGamepadPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _aimDownSightGamepadYawCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimDownSightRotationScaleAdjustmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _aimDownSightMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fireDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fireRotationScaleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fireRotationScaleAdjustmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fireMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _longRangeShotMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _successMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _missMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _missShotCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nearMissShotMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _successShotDuration;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetAimingSubstate(EFireHarpoonRifleAimingInteractionSubState newState);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_HandleMissShotScores(const TArray<ADBDPlayer*>& nearMissedPlayers);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFireHarpoonRifleInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UFireHarpoonRifleInteraction) { return 0; }
