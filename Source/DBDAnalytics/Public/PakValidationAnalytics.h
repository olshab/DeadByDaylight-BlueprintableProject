#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PakValidationAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPakValidationAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ErrorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Filename;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChunkIndex;

	UPROPERTY(EditAnywhere)
	uint32 ReceivedHash;

public:
	DBDANALYTICS_API FPakValidationAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPakValidationAnalytics) { return 0; }
