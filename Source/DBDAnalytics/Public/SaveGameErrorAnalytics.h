#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameErrorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameErrorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ErrorCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ErrorDetails;

	UPROPERTY(EditAnywhere)
	uint32 KrakenErrorCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StateName;

public:
	DBDANALYTICS_API FSaveGameErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSaveGameErrorAnalytics) { return 0; }
