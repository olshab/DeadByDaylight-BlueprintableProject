#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OrbProperties.h"
#include "EVoidEnergyType.h"
#include "EOrbTravelState.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "VoidEnergyOrbSpawner.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2022_API UVoidEnergyOrbSpawner : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeBetweenEachSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _totalDistanceForOrbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeOrbMoves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeOrbHovers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _downedSurviorSpawnOffsetHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _palletSpawnHeightOfOrbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lockerSpawnForwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lockerSpawnUpwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _slasherSpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _slasherSpawnOffsetFarDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _voidEnergyOrbClass;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SpawnVoidEnergyOrb(const FOrbProperties& orbProperties, EOrbTravelState startingTravelState);

	UFUNCTION(BlueprintCallable)
	void Authority_TimerSpawnVoidEnergyOrb(const FOrbProperties orbProperties, EOrbTravelState startingTravelState);

	UFUNCTION()
	void Authority_SurvivorStunOnKiller(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_SurvivorStunKillerWithPallet(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_SurvivorStunKillerWithHeadOn(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_SurvivorStunKillerWithFlashLight(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_KillerDownSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_GiveVoidEnergyToPlayer(const EVoidEnergyType voidEnergyType, const int32 voidEnergyToAdd);

public:
	UVoidEnergyOrbSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyOrbSpawner) { return 0; }
