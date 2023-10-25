#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.generated.h"

USTRUCT(BlueprintType)
struct FRewardResponseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Type_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;

public:
	DEADBYDAYLIGHT_API FRewardResponseItem();
};

FORCEINLINE uint32 GetTypeHash(const FRewardResponseItem) { return 0; }
