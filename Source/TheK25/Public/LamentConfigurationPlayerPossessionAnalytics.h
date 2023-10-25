#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LamentConfigurationPlayerPossessionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLamentConfigurationPlayerPossessionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PickUpElapsedMatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropElapsedMatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Outcome;

public:
	THEK25_API FLamentConfigurationPlayerPossessionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationPlayerPossessionAnalytics) { return 0; }
