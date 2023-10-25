#pragma once

#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FBaseSingleStructIndexAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SessionGuid;

public:
	BHVRANALYTICS_API FBaseSingleStructIndexAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBaseSingleStructIndexAnalytics) { return 0; }
