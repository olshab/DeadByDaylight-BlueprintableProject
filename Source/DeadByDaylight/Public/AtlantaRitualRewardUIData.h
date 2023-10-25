#pragma once

#include "CoreMinimal.h"
#include "EAtlantaRitualRewardUIType.h"
#include "EItemRarity.h"
#include "AtlantaRitualRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualRewardUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaRitualRewardUIType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualRewardUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualRewardUIData) { return 0; }
