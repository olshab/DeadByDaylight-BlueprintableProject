#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "VoidEnergyProducer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UVoidEnergyProducer : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxEnergyCanAward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _energyToGiveOnEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _gameEventToRewardEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TotalEnergyGiven, Transient)
	int32 _totalEnergyGiven;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _voidEnergySpawnObjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _voidEnergyHoverObjectName;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_TotalEnergyGiven(int32 lastTotalEnergyGivenValue);

public:
	UFUNCTION(BlueprintPure)
	bool HasEnergyLeftToGive() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingEnergy() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidOrbsSpawned(const int32 orbsSpawned);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UVoidEnergyProducer();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyProducer) { return 0; }
