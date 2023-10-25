#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PrestigeRewardItemAnalytic.h"
#include "PrestigeLevelUpAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPrestigeLevelUpAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NewPrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodpointsSpent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPrestigeRewardItemAnalytic> ItemRewards;

public:
	DBDANALYTICS_API FPrestigeLevelUpAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeLevelUpAnalytics) { return 0; }
