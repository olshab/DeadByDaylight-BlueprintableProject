#pragma once

#include "CoreMinimal.h"
#include "ProximityToActorsIterativeWeightAdjustmentStrategy.h"
#include "ETileSpawnPointType.h"
#include "ProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy : public UProximityToActorsIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType _spawnPointType;

public:
	UProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UProximityToSpawnPointTypeIterativeWeightAdjustmentStrategy) { return 0; }
