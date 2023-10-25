#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ArchiveNewTomePopupAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNewTomePopupAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ArchiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ButtonId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WasVideoWatchUntilEnd;

public:
	DBDANALYTICS_API FArchiveNewTomePopupAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNewTomePopupAnalytics) { return 0; }
