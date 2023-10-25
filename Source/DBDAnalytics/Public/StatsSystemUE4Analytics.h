#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Stat.h"
#include "Counter.h"
#include "MemoryStat.h"
#include "StatsSystemUE4Analytics.generated.h"

USTRUCT(BlueprintType)
struct FStatsSystemUE4Analytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBudget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStat> FlatAggregate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCounter> CounterAggregate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMemoryStat> MemoryAggregate;

public:
	DBDANALYTICS_API FStatsSystemUE4Analytics();
};

FORCEINLINE uint32 GetTypeHash(const FStatsSystemUE4Analytics) { return 0; }
