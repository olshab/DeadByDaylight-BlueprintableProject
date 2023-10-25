#pragma once

#include "CoreMinimal.h"
#include "FeatureLocksConditionData.generated.h"

USTRUCT(BlueprintType)
struct FFeatureLocksConditionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Left;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Operator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Right;

public:
	DEADBYDAYLIGHT_API FFeatureLocksConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureLocksConditionData) { return 0; }
