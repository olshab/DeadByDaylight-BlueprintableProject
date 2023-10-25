#pragma once

#include "CoreMinimal.h"
#include "StatsProgressionData.h"
#include "SerializablePlayerStatsProgression.generated.h"

USTRUCT(BlueprintType)
struct FSerializablePlayerStatsProgression
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStatsProgressionData> StatsProgression;

public:
	DBDANALYTICS_API FSerializablePlayerStatsProgression();
};

FORCEINLINE uint32 GetTypeHash(const FSerializablePlayerStatsProgression) { return 0; }
