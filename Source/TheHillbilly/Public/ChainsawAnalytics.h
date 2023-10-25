#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ChainsawEventWhileCamping.h"
#include "ChainsawAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FChainsawAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FChainsawEventWhileCamping> DownSurvivorsWithChainsawWhileCampingEvents;

public:
	THEHILLBILLY_API FChainsawAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FChainsawAnalytics) { return 0; }
