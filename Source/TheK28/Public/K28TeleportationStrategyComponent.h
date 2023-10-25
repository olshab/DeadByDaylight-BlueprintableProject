#pragma once

#include "CoreMinimal.h"
#include "K28LockerCluster.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K28TeleportationStrategyComponent.generated.h"

class UK28LockerComponent;
class ADBDActorIndicator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28TeleportationStrategyComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	TArray<FK28LockerCluster> _lockerClusters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minMovementSquaredDistanceForBestClusterRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDeltaSquaredDistanceForBestTargetRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDeltaDotProductForBestTargetRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDotProductToBeEligibleForBestCluster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28LockerComponent> _lockerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ADBDActorIndicator> _teleportIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ADBDActorIndicator* _teleportIndicator;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_UpdateBestTeleportTarget(int32 bestTeleportTargetID);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UpdateBestTeleportTarget(int32 bestTeleportTargetID);

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28TeleportationStrategyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28TeleportationStrategyComponent) { return 0; }
