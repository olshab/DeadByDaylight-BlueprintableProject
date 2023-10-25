#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LegionKillerAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLegionKillerAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Pallet;

public:
	THELEGION_API FLegionKillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLegionKillerAnalytics) { return 0; }
