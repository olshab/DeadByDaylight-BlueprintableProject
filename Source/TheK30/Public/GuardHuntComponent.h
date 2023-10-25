#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "SpeedBasedNetSyncedValue.h"
#include "UObject/NoExportTypes.h"
#include "GuardHuntComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGuardHuntComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuardPhaseProgressUpdate, float, completionProgress);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGuardPhaseProgressUpdate OnGuardPhaseProgressUpdate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxPathingDetourLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceBeforeGoingToNextWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceBeforeGoingToNextWaypointOffNavmesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceFromLockerToClearWaypoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _underWaypointZDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FSpeedBasedNetSyncedValue _huntTimeLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HuntedSurvivor, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _huntedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HuntStartingLocation, meta=(AllowPrivateAccess=true))
	FVector _huntStartingLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _speedConsideredStuck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeStuckToResetPathing;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_HuntStartingLocation();

	UFUNCTION(BlueprintCallable)
	void OnRep_HuntedSurvivor(ACamperPlayer* previousChasedSurvivor);

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetHuntedSurvivor() const;

private:
	UFUNCTION()
	void Authority_OnCamperUnhooked(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnCamperInjuredOrDowned(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGuardHuntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGuardHuntComponent) { return 0; }
