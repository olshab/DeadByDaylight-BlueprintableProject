#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MapSelectionWeight.h"
#include "MapSelectionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMapSelectionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SelectedMapId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MapSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SelectedMapOdds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalMapWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMapSelectionWeight> MapWeights;

public:
	DBDANALYTICS_API FMapSelectionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMapSelectionAnalytics) { return 0; }
