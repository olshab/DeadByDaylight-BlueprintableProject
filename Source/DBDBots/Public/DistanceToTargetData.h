#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DistanceToTargetData.generated.h"

USTRUCT(BlueprintType)
struct FDistanceToTargetData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDateTime _lastUpdateTime;

	UPROPERTY(EditAnywhere)
	FDateTime _lastTargetTime;

public:
	DBDBOTS_API FDistanceToTargetData();
};

FORCEINLINE uint32 GetTypeHash(const FDistanceToTargetData) { return 0; }
