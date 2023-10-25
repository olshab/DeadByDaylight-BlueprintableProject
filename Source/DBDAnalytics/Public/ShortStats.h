#pragma once

#include "CoreMinimal.h"
#include "Stat.h"
#include "Counter.h"
#include "MemoryStat.h"
#include "ShortStats.generated.h"

USTRUCT(BlueprintType)
struct FShortStats
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStat> FlatAggregate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCounter> CounterAggregate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMemoryStat> MemoryAggregate;

public:
	DBDANALYTICS_API FShortStats();
};

FORCEINLINE uint32 GetTypeHash(const FShortStats) { return 0; }
