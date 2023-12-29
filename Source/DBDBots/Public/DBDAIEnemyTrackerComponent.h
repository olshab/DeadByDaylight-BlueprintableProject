#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITunableParameter.h"
#include "AITrackedEnemyData.h"
#include "DBDAIEnemyTrackerComponent.generated.h"

class UAIEnemyTracker;
class UAIEnemyTargetPrediction;
class ACharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIEnemyTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAIEnemyTracker* EnemyTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAIEnemyTargetPrediction* EnemyTargetPrediction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DataUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetPredictionUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PotentialTargetedLocationRange;

private:
	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<ACharacter>, FAITrackedEnemyData> _trackedEnemiesData;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UDBDAIEnemyTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIEnemyTrackerComponent) { return 0; }
