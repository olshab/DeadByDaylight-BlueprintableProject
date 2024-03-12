#pragma once

#include "CoreMinimal.h"
#include "ERewardType.h"
#include "EProgressionType.h"
#include "ECurrencyType.h"
#include "MysteryBoxReward.generated.h"

USTRUCT(BlueprintType)
struct FMysteryBoxReward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERewardType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProgressionType ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weighting;

public:
	DEADBYDAYLIGHT_API FMysteryBoxReward();
};

FORCEINLINE uint32 GetTypeHash(const FMysteryBoxReward) { return 0; }
