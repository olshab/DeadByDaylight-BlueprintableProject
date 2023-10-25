#pragma once

#include "CoreMinimal.h"
#include "EAtlantaRewardType.h"
#include "EUMGDailyRewardWidgetState.h"
#include "EItemRarity.h"
#include "DailyRewardData.generated.h"

USTRUCT(BlueprintType)
struct FDailyRewardData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EAtlantaRewardType RewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ParentIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsMarkedSpecial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity ItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EUMGDailyRewardWidgetState State;

public:
	DEADBYDAYLIGHT_API FDailyRewardData();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRewardData) { return 0; }
