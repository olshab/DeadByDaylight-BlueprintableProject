#pragma once

#include "CoreMinimal.h"
#include "SpawnedAttackPoint.generated.h"

class ABaseTormentTrailPoint;

USTRUCT(BlueprintType)
struct FSpawnedAttackPoint
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ABaseTormentTrailPoint* AttackTrailPoint;

public:
	THEEXECUTIONER_API FSpawnedAttackPoint();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnedAttackPoint) { return 0; }
