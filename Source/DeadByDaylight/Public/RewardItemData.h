#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "ECurrencyType.h"
#include "EInventoryItemType.h"
#include "RewardItemData.generated.h"

USTRUCT(BlueprintType)
struct FRewardItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInventoryItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDuplicate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrencyAmount;

public:
	DEADBYDAYLIGHT_API FRewardItemData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardItemData) { return 0; }
