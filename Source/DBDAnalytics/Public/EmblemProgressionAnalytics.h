#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EmblemProgressionDetailsAnalytics.h"
#include "EmblemProgressionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EmblemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EmblemValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EmblemQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEmblemProgressionDetailsAnalytics> ProgressionDetails;

public:
	DBDANALYTICS_API FEmblemProgressionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionAnalytics) { return 0; }
