#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HangAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FHangAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHang;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HangSourcesInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HangLogs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastLoadingProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AdditionalLogs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HangSourcesName;

public:
	DBDANALYTICS_API FHangAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHangAnalytics) { return 0; }
