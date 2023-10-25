#pragma once

#include "CoreMinimal.h"
#include "PromoPackSelectedItemData.generated.h"

class UTexture2D;
class UUMGPromoPackItemWidget;

USTRUCT(BlueprintType)
struct FPromoPackSelectedItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemTypeIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemSubTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGPromoPackItemWidget* Widget;

public:
	DEADBYDAYLIGHT_API FPromoPackSelectedItemData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackSelectedItemData) { return 0; }
