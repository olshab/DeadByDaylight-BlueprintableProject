#pragma once

#include "CoreMinimal.h"
#include "SurvivorStatusInterface.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "StatusEffect.h"
#include "SurvivorMadnessEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USurvivorMadnessEffect : public UStatusEffect, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MadnessAmount, meta=(AllowPrivateAccess=true))
	float _madnessAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxMadnessTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _madnessThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _insaneSkillCheckChances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _screamDelayMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _screamDelayMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName madnessStatusViewId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _survivorOperatingLockerSemanticTags;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnMadnessBubbleIndicator();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_MadnessAmount();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnMadnessTierChanged(const int32 newMadnessTier, const int32 oldMadnessTier);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_MadnessIntermittentScream();

	UFUNCTION(BlueprintPure)
	int32 GetMadnessTier() const;

	UFUNCTION(BlueprintCallable)
	void Authority_AddMadness(float amountToAdd);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActivateMadnessBubbleIndicator();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorMadnessEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorMadnessEffect) { return 0; }
