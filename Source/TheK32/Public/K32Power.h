#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "K32Power.generated.h"

class AK32KillerPodVisionController;
class UK32PowerChargePresentationPowerFadeComponent;
class UK32AntiCampZoneIdentifierComponent;
class UInteractor;
class UBoxPlayerOverlapComponent;
class AK32KillerPodTargetIndicator;
class UK32PowerChargePresentationItemProgressComponent;
class AK32KillerPodSpawningIndicator;
class UStatusEffect;
class UAimingCrosshairComponent;
class ACamperPlayer;
class UChargeableComponent;
class UAuthoritativeActorPoolComponent;
class UK32EmpScoreComponent;

UCLASS(Blueprintable)
class AK32Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK32PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK32PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK32AntiCampZoneIdentifierComponent* _antiCampZoneIdentifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK32KillerPodVisionController> _killerPodVisionControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK32KillerPodTargetIndicator> _killerPodTargetIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK32KillerPodSpawningIndicator> _killerPodSpawningIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _blindnessProtectionStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _undetectableWhileInPodsStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _overclockStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _addon16RecentlyTeleportedTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	AK32KillerPodVisionController* _killerPodVisionController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK32KillerPodTargetIndicator* _killerPodTargetIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK32KillerPodSpawningIndicator* _killerPodSpawningIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UAimingCrosshairComponent* _aimingCrosshairComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _killerProjectileSpawnChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _empPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UK32EmpScoreComponent* _empScoreComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _recentlyTeleportedToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTrackedTimeSinceTeleportToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _survivorTagsPreventingPower;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32Power();
};

FORCEINLINE uint32 GetTypeHash(const AK32Power) { return 0; }
