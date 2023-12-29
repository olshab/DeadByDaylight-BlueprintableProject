#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ETileSpawnPointType.h"
#include "LamentConfigurationSpawnInfo.h"
#include "LamentConfigurationSpawnStrategy.generated.h"

class UTileSpawnPoint;
class AHatch;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULamentConfigurationSpawnStrategy : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerPointDistanceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _survivorPointDistanceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistancePointAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minSurvivorDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minSurvivorDistancePointPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minKillerDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minHatchDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromOtherSpawns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minKillerDistancePointPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfSpawnPointInLottery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pointPenaltyPerUsedLocationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ETileSpawnPointType> _spawnPointsTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _downRaycastLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastZOffet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _navmeshCheckRadius;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	TArray<FLamentConfigurationSpawnInfo> _cached_spawnsInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTileSpawnPoint* _lastUsedSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AActor>> _actorsInMapToAvoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDistanceFromActorsToAvoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AHatch*> _hatches;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULamentConfigurationSpawnStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationSpawnStrategy) { return 0; }
