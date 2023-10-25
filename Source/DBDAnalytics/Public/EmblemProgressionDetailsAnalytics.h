#pragma once

#include "CoreMinimal.h"
#include "EmblemProgressionDetailsAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionDetailsAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressionPoint;

public:
	DBDANALYTICS_API FEmblemProgressionDetailsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionDetailsAnalytics) { return 0; }
