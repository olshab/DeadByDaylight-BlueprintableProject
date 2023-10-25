#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "BarrelEventComponent.generated.h"

class ABarrel;
class ARespawnableInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class BARREL2023_API UBarrelEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<ABarrel>> _spawnableBarrelClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _barrelSwitchTimerMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _barrelSwitchTimerMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _redBarrelSpawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _numberOfGeneratorsToComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _numberOfHooksToComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ABarrel*, FVector> _barrelLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCapsuleRadius;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BarrelSpawnRedBarrel();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BarrelSpawnGreenBarrel();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BarrelSpawnBlueBarrel();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BarrelPauseAllTimers(bool shouldPause);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BarrelDebugBarrelSpawnPositions(float duration) const;

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroComplete();

	UFUNCTION(BlueprintCallable)
	void Authority_OnBarrelTimerDone(ARespawnableInteractable* respawnableInteractable);

	UFUNCTION(BlueprintCallable)
	void Authority_OnBarrelInteractionChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting);

public:
	UBarrelEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBarrelEventComponent) { return 0; }
