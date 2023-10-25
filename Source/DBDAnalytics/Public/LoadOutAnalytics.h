#pragma once

#include "CoreMinimal.h"
#include "LoadoutBaseAnalytics.h"
#include "LoadOutAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLoadOutAnalytics: public FLoadoutBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

public:
	DBDANALYTICS_API FLoadOutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadOutAnalytics) { return 0; }
