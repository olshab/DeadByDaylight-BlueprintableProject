#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"
#include "K25SurvivorChainTargetterComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainTargetterComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _timeBetweenQueuedChainsLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumSpawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumSpawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _sphereCastRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfPositionFindingTries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxNumberOfChainRetries;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DebugPositionFind(const FVector& startSweepPosition, const FVector& endSweepPosition, bool hasFoundPosition, const FVector& foundPosition, bool hasFoundCollision, const FVector& collisionPosition) const;

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UK25SurvivorChainTargetterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainTargetterComponent) { return 0; }
