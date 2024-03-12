#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EVoidEnergyType.h"
#include "Templates/SubclassOf.h"
#include "EVoidEnergyChangeReason.h"
#include "PlayerVoidEnergy.generated.h"

class ADBDPlayer;
class UStatusEffect;
class UVoidEnergyOrbSpawner;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2022_API UPlayerVoidEnergy : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	EVoidEnergyChangeReason _reasonLastVoidEnergyChangeOccurred;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentVoidEnergy, Transient, meta=(AllowPrivateAccess=true))
	int32 _currentVoidEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TotalVoidEnergySpent, Transient, meta=(AllowPrivateAccess=true))
	int32 _totalVoidEnergySpent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _voidEnergyLevelsToStartNextTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxEnergyOnPlayerAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _amountLostOnDownAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _amountGainedOnDownAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _amountGainedOnStunAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _amountLostOnStunAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _hasteValueTiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeHasteEffectLasts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UVoidEnergyOrbSpawner> _voidEnergyOrbSpawnerClass;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _scoreEventTiers;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _scoreEventTiersWithoutOffering;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnVoidEnergyLost(EVoidEnergyChangeReason changeReason);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnVoidEnergyGained();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TotalVoidEnergySpent(int32 previousTotalVoidEnergySpent);

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentVoidEnergy(int32 previousEnergyCount);

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnLocallyControlledChanged(bool isLocallyControlled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ShowVoidEnergyChanges(const int32 previousVoidEnergyCount, const int32 newVoidEnergyCount);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddVoidEnergy(const int32 amountToAdd, const EVoidEnergyType voidEnergyType);

public:
	UFUNCTION(BlueprintPure)
	int32 GetTotalVoidEnergyDeposited() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxAmountOfVoidEnergyCanReceive() const;

	UFUNCTION(BlueprintPure)
	int32 GetCurrentVoidEnergyCount() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPlayerVoidEnergy();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerVoidEnergy) { return 0; }
