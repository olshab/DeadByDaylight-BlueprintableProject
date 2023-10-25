#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LogMirrorsAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLogMirrorsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LogMirrors;

public:
	DBDANALYTICS_API FLogMirrorsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLogMirrorsAnalytics) { return 0; }
