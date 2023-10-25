#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedBannerData.h"
#include "StoreFeaturedBannerUIData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedBannerUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BannerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreFeaturedBannerData BannerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LimitedTimeBannerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LimitedTimeDiscountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOwned;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedBannerUIData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedBannerUIData) { return 0; }
