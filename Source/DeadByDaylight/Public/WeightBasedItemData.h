#pragma once

#include "CoreMinimal.h"
#include "ItemIdDropdown.h"
#include "WeightBasedItemData.generated.h"

USTRUCT(BlueprintType)
struct FWeightBasedItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemIdDropdown ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

public:
	DEADBYDAYLIGHT_API FWeightBasedItemData();
};

FORCEINLINE uint32 GetTypeHash(const FWeightBasedItemData) { return 0; }
