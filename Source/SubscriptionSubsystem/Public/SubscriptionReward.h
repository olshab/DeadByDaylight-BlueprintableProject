#pragma once

#include "CoreMinimal.h"
#include "RewardItem.h"
#include "UObject/NoExportTypes.h"
#include "SubscriptionReward.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionReward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FRewardItem> Rewards;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NextClaimTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AnalyticsEventId;

public:
	SUBSCRIPTIONSUBSYSTEM_API FSubscriptionReward();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionReward) { return 0; }
