#pragma once

#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "UniquelyIdentifiedAnalytic.generated.h"

USTRUCT(BlueprintType)
struct FUniquelyIdentifiedAnalytic: public FBaseSingleStructIndexAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Branch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Changelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Configuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Platform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BackendEnv;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DataContentVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RunContext;

public:
	DBDANALYTICS_API FUniquelyIdentifiedAnalytic();
};

FORCEINLINE uint32 GetTypeHash(const FUniquelyIdentifiedAnalytic) { return 0; }
