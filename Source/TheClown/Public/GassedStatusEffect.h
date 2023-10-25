#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "EBombType.h"
#include "GassedStatusEffect.generated.h"

class ABaseGasCloudProjectile;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGassedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _isInCloud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInAntidoteCloud, Transient, meta=(AllowPrivateAccess=true))
	bool _isInAntidoteCloud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ABaseGasCloudProjectile*> _overlappingClouds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ABaseGasCloudProjectile*> _overlappingAntidoteClouds;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TotalTimesEnteringToxicClouds)
	uint16 _totalTimesEnteringToxicClouds;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateAntidoteEffectVFX(float durationRemaining);

public:
	UFUNCTION(BlueprintCallable)
	void SetRemainingDuration(const float value);

	UFUNCTION(BlueprintCallable)
	void SetRemainingAntidoteDuration(const float value);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnToxinEffectEnd(float durationSkipped);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnToxinEffectBegin(float effectDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnToxinCured();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TotalTimesEnteringToxicClouds();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsInAntidoteCloud();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDirectBottleHit(EBombType bottleType);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAntidoteEffectEnd(float durationSkipped);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAntidoteEffectBegin(float effectDuration);

	UFUNCTION(BlueprintPure)
	bool IsInCloud() const;

	UFUNCTION(BlueprintPure)
	bool IsInAntidoteCloud() const;

public:
	UFUNCTION(BlueprintPure)
	float GetRemainingDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingAntidoteDuration() const;

	UFUNCTION(BlueprintPure)
	float GetCloudEffectDuration() const;

	UFUNCTION(BlueprintPure)
	float GetAntidoteCloudEffectDuration() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsInCloud(const bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsInAntidoteCloud(const bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveOverlappingCloud(ABaseGasCloudProjectile* cloud);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddOverlappingCloud(ABaseGasCloudProjectile* cloud);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGassedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UGassedStatusEffect) { return 0; }
