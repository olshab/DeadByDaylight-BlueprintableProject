#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "ECamperDamageState.h"
#include "SurvivorStatusInterface.h"
#include "Templates/SubclassOf.h"
#include "K31SurvivorDetection.generated.h"

class UTimerObject;
class UStatusEffect;
class UChargeableComponent;
class AK31Power;
class AActor;
class AK31Drone;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31SurvivorDetection : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hinderedStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _brokenStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _killerInstinctStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _brokenStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _secondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _chargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _chargeModifierWhenClawTrapped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _lockOnChargeStackPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _hinderedEffectPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _hinderedEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _killerInstinctEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _enableKillerInstinctRangeCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _killerInstinctEffectKillerRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _immuneToDroneDetectionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _survivorIsBelowDroneDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _showSurvivorOnRadarDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OriginatingPower, meta=(AllowPrivateAccess=true))
	AK31Power* _originatingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChargeableComponent, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chargingLockedOnChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _immuneToDetectionTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _survivorIsBelowDroneTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _showSurvivorOnRadarTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsFullyLockedOn, meta=(AllowPrivateAccess=true))
	bool _isFullyLockedOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK31Drone*> _overlappingDrones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK31Drone*> _overlappingActiveDrones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _lastActiveTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_OriginatingPower(AK31Power* oldPower);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsFullyLockedOn();

	UFUNCTION(BlueprintCallable)
	void OnRep_ChargeableComponent();

	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeCompleted(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31SurvivorDetection();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorDetection) { return 0; }
