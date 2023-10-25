#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DailyRitualAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RitualId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoursElapsed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Progress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PendingRituals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecificCharacter;

public:
	DBDANALYTICS_API FDailyRitualAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualAnalytics) { return 0; }
