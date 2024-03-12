#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "GameEventData.h"
#include "K35KillerTeleportPointSpawningManager.generated.h"

class AK35KillerTeleportPoint;
class ASlasherPlayer;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35KillerTeleportPointSpawningManager : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chargeTimerReductionMultiplierOnManuallyDestroyingKillerTeleportPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _spawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _spawnTimeReductionOnSurvivorHookedWithKillerTeleportPointNearby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _spawnTimeReductionOnInjuredSurvivorWithKillerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _addon16SpawnTimeReductionOnWallOrPalletBreakPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _spawnTimeReductionOnAfflictedSurvivorWithKillerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _spawnTimeMultiplierBySurvivorsAffectedWithKillerEffectCurve;

private:
	UFUNCTION()
	void OnSurvivorInjuredWithKillerEffect(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnSurvivorAfflictedWithKillerEffect(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION()
	void OnKillerManuallyDestroyedKillerTeleportPoint(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION()
	void OnGeneratorFixed(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnBreakWallOrPallet(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSpawningStarted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSpawningComplete(AK35KillerTeleportPoint* acquiredTeleportPoint);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSpawningCancelled();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnHookCausedRecycle();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnChargingStarted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnChargingComplete();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CompleteChargingTime();

public:
	UFUNCTION(BlueprintPure)
	bool IsSpawnTimerActive() const;

	UFUNCTION(BlueprintPure)
	bool IsChargeTimerActive() const;

	UFUNCTION(BlueprintPure)
	bool IsAbleToSpawnKillerTeleportPoint() const;

	UFUNCTION(BlueprintPure)
	float GetSpawnTimerProgress() const;

	UFUNCTION(BlueprintPure)
	float GetChargeTimerProgress() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpawningStarted(const ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpawningCancelled(const ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpawnComplete(const ASlasherPlayer* killer, const AK35KillerTeleportPoint* acquiredTeleportPoint);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargingStarted(const ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargingComplete(const ASlasherPlayer* killer, const bool isSpawningPossible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeTimerReduced(const ASlasherPlayer* killer);

private:
	UFUNCTION()
	void Authority_OnSurvivorHookedChanged(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSpawnTimerEnded();

public:
	UK35KillerTeleportPointSpawningManager();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerTeleportPointSpawningManager) { return 0; }
