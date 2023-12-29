#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "SurvivorPlagueEffect.generated.h"

class AInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorPlagueEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SicknessAmount, meta=(AllowPrivateAccess=true))
	float _sicknessAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sicknessCap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _vomitSlowDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _vomitSlowAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<float> _sicknessThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _wasRecentlyHitByVomit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _nonNauseatingInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _sicknessGainPerSecondFromInfectedInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _debugMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exposeMaximumSickSurvivorEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _brokenMaximumSickSurvivorEffect;

public:
	UFUNCTION(BlueprintCallable)
	void RefreshSicknessGainValues();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSurvivorVomit_Aesthetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSurvivorDisguisedOrUndisguised(bool isDisguised);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSurvivorBecomesInfected_Aesthetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSicknessCured_Aesthetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSicknessChanged_Aesthetic(float newSickness);

public:
	UFUNCTION(BlueprintCallable)
	void OnRep_SicknessAmount();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnMaxSicknessReached_Aesthetic();

public:
	UFUNCTION(BlueprintCallable)
	void OnHitByVomit(bool isSuperVomit);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSurvivorVomit();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSurvivorBecomesInfected();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSicknessCured();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSicknessChanged(float newSickness);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnMaxSicknessReached();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddOnScreenDebugMessage(uint64 key, float duration, FColor displayColor, const FString& debugMessage);

public:
	UFUNCTION(BlueprintPure)
	bool IsInfected() const;

	UFUNCTION(BlueprintPure)
	bool IsDebugModeActive() const;

	UFUNCTION(BlueprintPure)
	bool HasMaxLevelSickness() const;

	UFUNCTION(BlueprintPure)
	TArray<float> GetSicknessThresholds() const;

	UFUNCTION(BlueprintPure)
	float GetSicknessPercentage() const;

	UFUNCTION(BlueprintPure)
	uint8 GetSicknessLevel() const;

	UFUNCTION(BlueprintPure)
	float GetSicknessAmount() const;

	UFUNCTION(BlueprintPure)
	uint8 GetMaxSicknessLevel() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ResetSickness(float newSickness);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitByVomitProjectileAesthetic();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitByVomitProjectile(float sicknessToAdd);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitBySuperVomitProjectile();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Authority_InfectInteractable(AInteractable* interactable);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddSickness(float sicknessToAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorPlagueEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorPlagueEffect) { return 0; }
