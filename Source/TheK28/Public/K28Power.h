#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "K28InteractionPreventingTagsModification.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K28Power.generated.h"

class UK28KillerPlayerViewComponent;
class UK28KillerTeleportationComponent;
class UK28TeleportationStrategyComponent;
class UInteractor;
class UK28PowerPresentationItemProgressComponent;
class UK28DayNightComponent;
class UK28PowerChargePresentationPowerFadeComponent;
class UPowerChargeComponent;
class UK28KillerLockerComponent;
class AK28SecondaryCamera;
class AK28Remnant;
class AAnimationFollowerActor;
class UStatusEffect;
class UK28SurvivorAbductionCameraBehaviourComponent;

UCLASS(Blueprintable)
class AK28Power : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _powerChargeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK28PowerChargePresentationPowerFadeComponent* _k28PowerChargePresentationPowerFadeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK28PowerPresentationItemProgressComponent* _k28PowerPresentationItemProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28DayNightComponent> _dayNightComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28TeleportationStrategyComponent> _teleportationStrategyComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28KillerTeleportationComponent> _killerTeleportationComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28KillerPlayerViewComponent> _killerPlayerViewComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28KillerLockerComponent> _killerLockerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK28SecondaryCamera> _secondaryCameraClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK28Remnant> _k28RemnantClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AAnimationFollowerActor> _moriArmsAnimationFollowerActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	AK28SecondaryCamera* _secondaryCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK28KillerLockerComponent* _killerLockerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	AK28Remnant* _k28Remnant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _killerStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _survivorStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28SurvivorAbductionCameraBehaviourComponent> _survivorAbductionCameraBehaviourClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UK28DayNightComponent* _dayNightComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UK28TeleportationStrategyComponent* _teleportationStrategyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tokensWhenPowerIsFullyCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _secondsRequiredToChargePowerStartOfMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _secondsRequiredToChargePowerDayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _secondsRequiredToChargePowerNightTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTrackedTimeSinceLockerOrRemnantExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TeleportTokens, meta=(AllowPrivateAccess=true))
	int32 _teleportTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FK28InteractionPreventingTagsModification> _survivorInteractionsPreventingTagModifications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isTunableInit;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TeleportTokens();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28Power();
};

FORCEINLINE uint32 GetTypeHash(const AK28Power) { return 0; }
