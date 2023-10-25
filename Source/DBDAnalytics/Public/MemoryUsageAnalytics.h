#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MemoryUsageAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMemoryUsageAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameFlowStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 TotalPhysical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 TotalVirtual;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 PeakUsedPhysical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 PeakUsedVirtual;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 AvailablePhysical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 AvailableVirtual;

public:
	DBDANALYTICS_API FMemoryUsageAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMemoryUsageAnalytics) { return 0; }
