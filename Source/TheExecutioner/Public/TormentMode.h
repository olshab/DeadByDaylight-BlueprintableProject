#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "TormentMode.generated.h"

class UAuthoritativeActorPoolComponent;
class UPowerToggleComponent;
class UChargeableComponent;
class UAgonyComponent;
class UTormentTrailSpawnerComponent;
class UTormentTrailDetectorComponent;
class UPowerChargeComponent;
class UPowerChargePresentationItemProgressComponent;
class UTormentTrailPointCollectionComponent;
class UTormentModeCooldownInteraction;
class UCurveFloat;
class AMobileTormentTrailRenderer;

UCLASS(Blueprintable)
class THEEXECUTIONER_API ATormentMode : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _activateTormentModeCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _tormentModeCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerToggleComponent* _powerToggleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTormentTrailSpawnerComponent* _tormentTrailSpawnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _tormentTrailControllerPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _tormentAttackTrailControllerPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _restrictedTormentTrailControllerPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _tormentTrailPointPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _restrictedTormentTrailPointPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _activateTormentModeSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tormentModeChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tormentModeDischargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModePauseChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeAttackConsumePower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeMinimumPercentToActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeMouseYawScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeYawAdjustTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeGamePadYawScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeYawInputLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeNotMovingYawScaleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeNotMovingYawAdjustTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _normalWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentModeForcedPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAgonyComponent> _agonyComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UTormentTrailDetectorComponent> _killerTormentTrailDetectorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UTormentTrailDetectorComponent> _survivorTormentTrailDetectorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTormentModeCooldownInteraction* _tormentModeCooldownInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _tormentModeChargeSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AMobileTormentTrailRenderer> _mobileTormentTrailRendererClass;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_RequestMoreActorInAttackPool();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTormentModeStop_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTormentModeStart_Cosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void OnTormentModeChargeEmpty();

public:
	UFUNCTION(BlueprintPure)
	bool IsInTormentMode() const;

public:
	ATormentMode();
};

FORCEINLINE uint32 GetTypeHash(const ATormentMode) { return 0; }
