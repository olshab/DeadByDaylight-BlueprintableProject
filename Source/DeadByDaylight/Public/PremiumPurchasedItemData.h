#pragma once

#include "CoreMinimal.h"
#include "PremiumPurchasedItemData.generated.h"

USTRUCT(BlueprintType)
struct FPremiumPurchasedItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

public:
	DEADBYDAYLIGHT_API FPremiumPurchasedItemData();
};

FORCEINLINE uint32 GetTypeHash(const FPremiumPurchasedItemData) { return 0; }
