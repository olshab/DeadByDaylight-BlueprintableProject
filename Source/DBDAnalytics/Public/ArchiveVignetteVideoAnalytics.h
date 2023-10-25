#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ArchiveVignetteVideoAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FArchiveVignetteVideoAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ArchiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VignetteId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VideoId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartVideoTimestamp;

	UPROPERTY(EditAnywhere)
	double VideoTimeSpent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WasVideoWatchUntilEnd;

public:
	DBDANALYTICS_API FArchiveVignetteVideoAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveVignetteVideoAnalytics) { return 0; }
