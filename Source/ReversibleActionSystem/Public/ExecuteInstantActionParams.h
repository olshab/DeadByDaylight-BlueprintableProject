#pragma once

#include "CoreMinimal.h"
#include "ActionPredictionKey.h"
#include "ExecuteInstantActionParams.generated.h"

USTRUCT(BlueprintType)
struct FExecuteInstantActionParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionPredictionKey PredictionKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PredictionDelay;

public:
	REVERSIBLEACTIONSYSTEM_API FExecuteInstantActionParams();
};

FORCEINLINE uint32 GetTypeHash(const FExecuteInstantActionParams) { return 0; }
