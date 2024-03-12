#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "Collectable.h"
#include "StatProperty.h"
#include "Templates/SubclassOf.h"
#include "EK31PowerState.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "K31Power.generated.h"

class UActorPoolInitializer;
class UK31Scanner;
class UCurveFloat;
class UStatusEffect;
class UK31PowerChargePresentationItemProgressComponent;
class UK31PowerChargePresentationPowerFadeComponent;
class UK31SurvivorDetection;
class UInteractor;
class UAuthoritativeActorPoolComponent;
class UK31SurvivorClawTrapComponent;
class UTimerObject;

UCLASS(Blueprintable)
class THEK31_API AK31Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UK31PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UK31PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK31SurvivorDetection> _survivorDetectionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStatusEffectSpawnData> _effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _authority_scannerHasteEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _scannerHasteEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActorPoolInitializer* _dronePoolInitializer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _dronePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31Scanner* _scanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRepPowerState, meta=(AllowPrivateAccess=true))
	EK31PowerState _powerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerStatusEffectSpawnerHelper _effectSpawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK31SurvivorClawTrapComponent> _survivorClawTrapComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRepPowerCooldownTimer, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _powerCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _powerCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _hasteCurveBasedOnScannedSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _canRecallDisabledDrones;

private:
	UFUNCTION(BlueprintCallable)
	void OnRepPowerState() const;

	UFUNCTION(BlueprintCallable)
	void OnRepPowerCooldownTimer();

	UFUNCTION(BlueprintCallable)
	void Authority_UpdateHasteBasedOnScannedSurvivors() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK31Power();
};

FORCEINLINE uint32 GetTypeHash(const AK31Power) { return 0; }
