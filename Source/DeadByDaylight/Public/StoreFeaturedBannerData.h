#pragma once

#include "CoreMinimal.h"
#include "ETextBannerPosition.h"
#include "StoreFeaturedBannerData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedBannerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssociatedDlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssociatedCombinedItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssociatedCombinedOutfitId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETextBannerPosition TextPosition;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedBannerData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedBannerData) { return 0; }
