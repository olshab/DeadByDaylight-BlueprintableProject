#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReportFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct FReportFeedbackData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDateTime BanTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Reason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int64> MessageIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RecipientId;

public:
	DBDSHAREDTYPES_API FReportFeedbackData();
};

FORCEINLINE uint32 GetTypeHash(const FReportFeedbackData) { return 0; }
