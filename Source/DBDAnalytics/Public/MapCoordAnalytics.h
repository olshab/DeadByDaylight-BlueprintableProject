#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MapCoordData.h"
#include "MapCoordAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMapCoordAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMapCoordData> MapItem;

public:
	DBDANALYTICS_API FMapCoordAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMapCoordAnalytics) { return 0; }
