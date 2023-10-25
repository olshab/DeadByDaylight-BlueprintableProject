#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerStatusEffectUpdateAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatusEffectUpdateAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ElapsedMatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbOfConcurrentStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> StatusEffects;

public:
	DBDANALYTICS_API FPlayerStatusEffectUpdateAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusEffectUpdateAnalytics) { return 0; }
