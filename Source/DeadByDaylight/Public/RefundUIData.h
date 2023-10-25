#pragma once

#include "CoreMinimal.h"
#include "AtlantaRewardUIData.h"
#include "RefundUIData.generated.h"

USTRUCT(BlueprintType)
struct FRefundUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FAtlantaRewardUIData> OriginalRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FAtlantaRewardUIData Refund;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 FragmentAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 FragmentRequiredAmount;

public:
	DEADBYDAYLIGHT_API FRefundUIData();
};

FORCEINLINE uint32 GetTypeHash(const FRefundUIData) { return 0; }
