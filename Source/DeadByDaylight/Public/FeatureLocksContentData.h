#pragma once

#include "CoreMinimal.h"
#include "FeatureLocksConditionData.h"
#include "FeatureLocksContentData.generated.h"

USTRUCT(BlueprintType)
struct FFeatureLocksContentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Role_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFeatureLocksConditionData> Condition;

public:
	DEADBYDAYLIGHT_API FFeatureLocksContentData();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureLocksContentData) { return 0; }
