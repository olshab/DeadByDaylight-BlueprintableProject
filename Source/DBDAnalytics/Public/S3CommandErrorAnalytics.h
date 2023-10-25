#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "S3CommandErrorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FS3CommandErrorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString URL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Verb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResponseCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InvalidRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InvalidResponse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DecryptionFailure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BadResponse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ContentModifiedError;

public:
	DBDANALYTICS_API FS3CommandErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FS3CommandErrorAnalytics) { return 0; }
