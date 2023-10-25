#pragma once

#include "CoreMinimal.h"
#include "SpawnedTormentTrailPoint.generated.h"

class ATormentTrailPoint;

USTRUCT(BlueprintType)
struct FSpawnedTormentTrailPoint
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ATormentTrailPoint* TrailPoint;

public:
	THEEXECUTIONER_API FSpawnedTormentTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnedTormentTrailPoint) { return 0; }
