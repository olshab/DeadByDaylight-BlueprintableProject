#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GameConsoleLogAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGameConsoleLogAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Verbosity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Category;

	UPROPERTY(EditAnywhere)
	uint64 FrameCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StackTrace;

	UPROPERTY(EditAnywhere)
	uint32 Repeated;

public:
	DBDANALYTICS_API FGameConsoleLogAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameConsoleLogAnalytics) { return 0; }
