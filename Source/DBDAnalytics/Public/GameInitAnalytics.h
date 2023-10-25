#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GameInitAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGameInitAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InitGuid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProgressionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadCompleteState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ElapsedTime;

	UPROPERTY(EditAnywhere)
	uint32 FailureCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AdditionalInfo;

public:
	DBDANALYTICS_API FGameInitAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameInitAnalytics) { return 0; }
