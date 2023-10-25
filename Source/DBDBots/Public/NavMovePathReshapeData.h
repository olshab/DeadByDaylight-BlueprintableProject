#pragma once

#include "CoreMinimal.h"
#include "NavMovePathReshapeData.generated.h"

USTRUCT(BlueprintType)
struct FNavMovePathReshapeData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FNavMovePathReshapeData();
};

FORCEINLINE uint32 GetTypeHash(const FNavMovePathReshapeData) { return 0; }
