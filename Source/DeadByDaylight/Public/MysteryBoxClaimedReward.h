#pragma once

#include "CoreMinimal.h"
#include "ERewardType.h"
#include "EProgressionType.h"
#include "ECurrencyType.h"
#include "MysteryBoxClaimedReward.generated.h"

USTRUCT(BlueprintType)
struct FMysteryBoxClaimedReward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERewardType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType Currency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Currency_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EProgressionType Progression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Progression_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Amount_IsSet;

public:
	DEADBYDAYLIGHT_API FMysteryBoxClaimedReward();
};

FORCEINLINE uint32 GetTypeHash(const FMysteryBoxClaimedReward) { return 0; }
