#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "BasePerkAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FBasePerkAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ElapsedMatchTime;

public:
	DBDANALYTICS_API FBasePerkAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBasePerkAnalytics) { return 0; }
