#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HauntComponent.h"
#include "DBDTunableRowHandle.h"
#include "EPlayerRole.h"
#include "VoidZoneHauntComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AActor;
class UChargeableInteractionDefinition;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UVoidZoneHauntComponent : public UHauntComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVoidZoneEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerProgress, int32, killerProgress, int32, survivorProgress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHauntContestChange, bool, isContested);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHauntContestChange Cosmetic_OnHauntContested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerRoleEvent Cosmetic_OnHauntWon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnVoidZoneEvent Cosmetic_OnVoidZoneOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnVoidZoneEvent Cosmetic_OnVoidZoneClose;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _voidEnergyToCaptureHaunt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorVoidEnergyPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _progressDecayTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _initialWaitTimeToCaptureEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _progressDecayAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _progressCancelAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slasherVoidEnergyPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _camperRateToTakeVoidEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slasherRateToTakeVoidEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeOrbMoves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorTrackerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slasherTrackerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _camperHasteValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slasherHasteValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _enduranceStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _camperActionSpeedBoostStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _slasherActionSpeedBoostStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _slasherAttackCooldownStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _itemEnergyGainedOnCapture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _camperBonusDurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _camperActionSpeedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slasherBonusDurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slasherActionSpeedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	EPlayerRole _currentRoleWinningHaunt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _heightOffsetToSpawnOrb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableInteractionDefinition* _captureHauntInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _captureHauntChargeable;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_WinHauntForTeam(ADBDPlayer* winningPlayer, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UpdateAllPlayerHauntTargets(float chargeRemainingInHaunt, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone, bool isZoneContested, bool shouldRegressProgress);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayerEnterOrLeftZone(ADBDPlayer* playerEnteringOrLeavingZone, bool isPlayerLeavingZone, float chargeRemainingInHaunt, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone, bool isZoneContested, bool shouldRegressProgress);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnVoidZoneOpen();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnVoidZoneClose();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddCaptureProgress(int32 progress);

	UFUNCTION(BlueprintCallable)
	void Authority_StartRegression();

	UFUNCTION(BlueprintCallable)
	void Authority_ResetAllProgress();

	UFUNCTION(BlueprintCallable)
	void Authority_PlayerInZone(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void Authority_OnVoidZoneOpen();

	UFUNCTION(BlueprintCallable)
	void Authority_OnVoidZoneClose();

	UFUNCTION(BlueprintCallable)
	void Authority_OnInteractionCompleted(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION(BlueprintCallable)
	void Authority_GrantCaptureBonusStatusEffects(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void Authority_DecayProgress(float deltaTime);

	UFUNCTION(BlueprintCallable)
	void Authority_AddCaptureProgress(int32 progress, ADBDPlayer* playerGivingEnergy);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UVoidZoneHauntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidZoneHauntComponent) { return 0; }
