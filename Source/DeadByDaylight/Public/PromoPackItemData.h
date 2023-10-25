#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "PromoPackItemData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPromoPackItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity ItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;

public:
	DEADBYDAYLIGHT_API FPromoPackItemData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackItemData) { return 0; }
