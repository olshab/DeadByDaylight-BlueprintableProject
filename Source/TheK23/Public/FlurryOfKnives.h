#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "FlurryOfKnives.generated.h"

class UCurveFloat;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFlurryOfKnives : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NumOfStacksReduction, meta=(AllowPrivateAccess=true))
	int32 _replicatedNumOfStacksReduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isSuperModeThrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _selfSlowEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _selfSlowStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flurryOfKnivesEnterDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flurryOfKnivesExitDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _baseTimeBetweenThrows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _throwRateModifierByKnivesThrown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _superModeDeactivationBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _superModeThrowRateModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _knivesLaunchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _convergencePointDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _coneOfFireAngleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _consecutiveKnivesStacksDecayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxConsecutiveKnivesStacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _movementSpeedByKnivesThrown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _superModeBaseMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _recoilIntensityByKnivesThrown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _recoilDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _recoilAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maximumRecoilAngleVariation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _rotationSpeedAdjustmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimingStanceRotationYawScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimingStanceRotationPitchScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _throwingRotationYawScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _throwingRotationPitchScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimingStanceGamepadRotationYawScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimingStanceGamepadRotationPitchScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _throwingGamepadRotationYawScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _throwingGamepadRotationPitchScaleAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _aimingGamepadPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _aimingGamepadYawCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _throwingGamepadPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _throwingGamepadYawCurve;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_StartThrowing();

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_DecreaseConsecutiveKnivesStacks();

	UFUNCTION(BlueprintCallable)
	void OnRep_NumOfStacksReduction();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartThrowing();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlurryOfKnives();
};

FORCEINLINE uint32 GetTypeHash(const UFlurryOfKnives) { return 0; }
