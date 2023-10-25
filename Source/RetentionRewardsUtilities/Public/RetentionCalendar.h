#pragma once

#include "CoreMinimal.h"
#include "EClaimType.h"
#include "UObject/NoExportTypes.h"
#include "RetentionReward.h"
#include "RetentionCalendar.generated.h"

USTRUCT(BlueprintType)
struct FRetentionCalendar
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime StartTime;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime EndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EClaimType ClaimType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FRetentionReward> Rewards;

public:
	RETENTIONREWARDSUTILITIES_API FRetentionCalendar();
};

FORCEINLINE uint32 GetTypeHash(const FRetentionCalendar) { return 0; }
