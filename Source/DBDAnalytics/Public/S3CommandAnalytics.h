#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "S3CommandAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FS3CommandAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RequestContentLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContentType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ElapsedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString URL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Verb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResponseContentLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResponseCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

public:
	DBDANALYTICS_API FS3CommandAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FS3CommandAnalytics) { return 0; }
