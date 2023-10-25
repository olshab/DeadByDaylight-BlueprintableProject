#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SyncLoadAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FSyncLoadAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoadTimeMilliseconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DeviceProfileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BuildConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChangelistNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameFlowContext;

public:
	DBDANALYTICS_API FSyncLoadAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSyncLoadAnalytics) { return 0; }
