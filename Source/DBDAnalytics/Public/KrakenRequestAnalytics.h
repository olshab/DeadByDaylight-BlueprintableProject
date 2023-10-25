#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "KrakenRequestAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FKrakenRequestAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Method;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Route;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResponseCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProviderError;

	UPROPERTY(EditAnywhere)
	uint32 AttemptCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanRetry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WillRetry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Country;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttemptElapsedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalElapsedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalElapsedTimeCapped;

public:
	DBDANALYTICS_API FKrakenRequestAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FKrakenRequestAnalytics) { return 0; }
