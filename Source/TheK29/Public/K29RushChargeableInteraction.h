#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "K29RushMovementSpeedSetting.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K29GuidedMovementInstance.h"
#include "EK29RushPhase.h"
#include "ECamperDamageState.h"
#include "K29RushChargeableInteraction.generated.h"

class UK29RushChargesHandlerComponent;
class UK29PowerStatusHandlerComponent;
class AK29Power;
class AActor;
class UK29PathingCalculatorComponent;
class UCurveFloat;
class UStatusEffect;
class UInteractionDefinition;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29RushChargeableInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UK29PowerStatusHandlerComponent* _powerStatusHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UK29PathingCalculatorComponent* _pathingCalculatorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AK29Power* _powerCollectable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EK29RushPhase, FK29RushMovementSpeedSetting> _movementSpeedSettingsByState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _subsequentRushTimerTimeoutMovementSpeedMultiplierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _subsequentRushTimerTimeoutMovementSpeedReductionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _subsequentRushOpportunityTimerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _rushDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _rushDurationAfterFirst;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _capsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _survivorRevealTimeOnInstantPickup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _capsuleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _capsuleHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _bounceDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _rushAccelerationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _instantCarryAnimationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _percentageForRushChargeEndAvailability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _distanceInCmForNearMiss;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rushDetectionBackwardsOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _revealToSurvivorsStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _rushMovementSpeedInCmPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _rushGrabMovementSpeedInCmPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _grabRushDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rotationStrengthTransitionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumRushDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _intoGrabbingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _smashOutTimerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _isStoppingMomentumAtIntoGrabbing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _movementSpeedCurveBetweenRushesIncreased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _movementSpeedCurveChargingIncreased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _rushMovementSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _rushMovementSpeedCurveWithSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _killerRushSmashAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _survivorRushSmashAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _killerRushToCarryAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _survivorRushToCarryAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _survivorRushDropAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _killerRushCooldownAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _animTagFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lagInSecondsUntilRushIsInvalid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rushDropForwardDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _decisiveStrikeSkillCheckDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isLagChecked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UInteractionDefinition>> _survivorInteractionPreventingGrab;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SlashAtSurvivor(ACamperPlayer* survivor, const FVector& currentKillerPosition);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetCurrentRushAsEndingInCollision(bool hitOtherSurvivor);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetCurrentRushAsEndingAtLedge();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetCurrentRush(const FK29GuidedMovementInstance& newRushInstance, const EK29RushPhase targetPhase);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_DestroyPalletOrBreakable(AActor* destroyable);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_DamageSurvivorAsCollision(ACamperPlayer* survivor, const FVector& currentKillerPosition);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ChangeRushPhase(const EK29RushPhase newRushPhase, const float clientTimeStamp, const bool forceLocallyControlled);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_CancelInteraction();

	UFUNCTION(BlueprintCallable)
	void RushComplete(const bool rushEndedNaturally);

	UFUNCTION(BlueprintCallable)
	void OnWindowOfOpportunityTimeoutCooldownEnd();

	UFUNCTION(BlueprintCallable)
	void OnSubsequentRushOpportunityTimeout();

	UFUNCTION(BlueprintCallable)
	void OnSmashOutTimerCompleted();

	UFUNCTION(BlueprintCallable)
	void OnInstantCarryTimerComplete(ACamperPlayer* survivorToCarry);

	UFUNCTION(BlueprintCallable)
	void OnGrabbingTransitionComplete();

	UFUNCTION(BlueprintCallable)
	void OnCollisionEnableTimerComplete();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SmashSurvivor(ACamperPlayer* survivorToCarry);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SlashAtSurvivor(ACamperPlayer* survivor, const FVector& currentKillerPosition, const ECamperDamageState survivorTargetDamageState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetCurrentRushAsEndingInCollision();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetCurrentRushAsEndingAtLedge();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetCurrentRush(const FK29GuidedMovementInstance& newRushInstance);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RushValid();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RushInvalid();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DestroyPalletOrBreakable(AActor* destroyable);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DamageSurvivorAsCollision(const FVector& currentKillerPosition, ACamperPlayer* collidedSurvivor, const ECamperDamageState survivorTargetDamageState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ChangeRushPhase(const EK29RushPhase newRushPhase, const bool forceLocallyControlled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CarrySurvivor(ACamperPlayer* survivorToCarry);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CancelInteraction();

public:
	UFUNCTION(BlueprintPure)
	float GetRushTimeLeft() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowEndIndicator(const FVector& endIndicatorLocation, const FRotator& forwardRotation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSlashAtSurvivor(ACamperPlayer* survivor, const ECamperDamageState survivorTargetDamageState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushPhaseChanged(EK29RushPhase previousPhase, EK29RushPhase newPhase);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideEndIndicator();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DamageSurvivorAsCollision(ACamperPlayer* survivor, const ECamperDamageState survivorTargetDamageState);

private:
	UFUNCTION(BlueprintCallable)
	void BounceComplete();

public:
	UK29RushChargeableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK29RushChargeableInteraction) { return 0; }
