#pragma once

#include "CoreMinimal.h"
#include "AITrackedEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FAITrackedEnemyData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FAITrackedEnemyData();
};

FORCEINLINE uint32 GetTypeHash(const FAITrackedEnemyData) { return 0; }
