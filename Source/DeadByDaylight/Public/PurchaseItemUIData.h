#pragma once

#include "CoreMinimal.h"
#include "EEventItemContentType.h"
#include "EItemRarity.h"
#include "PurchaseItemUIData.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseItemUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EEventItemContentType ContentType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

public:
	DEADBYDAYLIGHT_API FPurchaseItemUIData();
};

FORCEINLINE uint32 GetTypeHash(const FPurchaseItemUIData) { return 0; }
