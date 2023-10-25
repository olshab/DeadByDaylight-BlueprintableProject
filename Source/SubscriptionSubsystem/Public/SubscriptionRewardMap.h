#pragma once

#include "CoreMinimal.h"
#include "ESubscriptionClaimType.h"
#include "SubscriptionReward.h"
#include "SubscriptionRewardMap.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionRewardMap
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<ESubscriptionClaimType, FSubscriptionReward> RewardsByClaimType;

public:
	SUBSCRIPTIONSUBSYSTEM_API FSubscriptionRewardMap();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionRewardMap) { return 0; }
