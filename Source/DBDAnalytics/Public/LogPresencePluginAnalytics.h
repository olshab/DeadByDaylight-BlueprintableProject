#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LogPresencePluginAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLogPresencePluginAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Context;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

public:
	DBDANALYTICS_API FLogPresencePluginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLogPresencePluginAnalytics) { return 0; }
