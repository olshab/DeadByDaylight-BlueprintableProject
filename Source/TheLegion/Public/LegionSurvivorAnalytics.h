#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LegionSurvivorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLegionSurvivorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DeepWoundCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FrenzyEffectivements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DeepWoundDying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DeepWoundEscape;

public:
	THELEGION_API FLegionSurvivorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLegionSurvivorAnalytics) { return 0; }
