#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITrackedEnemyData.h"
#include "DBDAIEnemyTrackerComponent.generated.h"

class UAIEnemyTracker;
class ACharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIEnemyTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAIEnemyTracker* EnemyTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateInterval;

private:
	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<ACharacter>, FAITrackedEnemyData> _trackedEnemiesData;

public:
	UDBDAIEnemyTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIEnemyTrackerComponent) { return 0; }
