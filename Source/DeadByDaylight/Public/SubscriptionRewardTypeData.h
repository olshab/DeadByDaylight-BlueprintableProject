#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "SubscriptionRewardTypeData.generated.h"

class UUMGMonthlyPassRewardItemWidget;

USTRUCT(BlueprintType)
struct FSubscriptionRewardTypeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGMonthlyPassRewardItemWidget> RewardItemWidget;

public:
	DEADBYDAYLIGHT_API FSubscriptionRewardTypeData();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionRewardTypeData) { return 0; }
