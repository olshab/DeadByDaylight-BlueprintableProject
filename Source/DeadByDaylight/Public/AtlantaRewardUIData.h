#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "EAtlantaRewardType.h"
#include "EItemRarity.h"
#include "AtlantaRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRewardUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaRewardType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType Currency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

public:
	DEADBYDAYLIGHT_API FAtlantaRewardUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRewardUIData) { return 0; }
