#pragma once

#include "CoreMinimal.h"
#include "ArchiveRewardsData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveRewardsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 XpRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StarsEarnedPerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PreStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PostEndDate;

public:
	DEADBYDAYLIGHT_API FArchiveRewardsData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveRewardsData) { return 0; }
