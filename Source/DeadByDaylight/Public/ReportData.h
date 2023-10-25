#pragma once

#include "CoreMinimal.h"
#include "ReportData.generated.h"

USTRUCT(BlueprintType)
struct FReportData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Reason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Comment;

public:
	DEADBYDAYLIGHT_API FReportData();
};

FORCEINLINE uint32 GetTypeHash(const FReportData) { return 0; }
