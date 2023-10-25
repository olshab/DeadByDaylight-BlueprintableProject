#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlagueSurvivorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPlagueSurvivorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BecomeInfectCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RegularVomitHits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SuperVomitHits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CleanSicknessCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeWithSickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeWithMaximumSickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInSuperMode;

public:
	THEPLAGUE_API FPlagueSurvivorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlagueSurvivorAnalytics) { return 0; }
