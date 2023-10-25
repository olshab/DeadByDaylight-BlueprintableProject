#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "WalesCypherAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FWalesCypherAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EnteredSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ExpectedSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimeoutThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Timeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CharmGranted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ValidCharacterSelcted;

public:
	DBDANALYTICS_API FWalesCypherAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FWalesCypherAnalytics) { return 0; }
