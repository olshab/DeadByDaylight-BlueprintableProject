#pragma once

#include "CoreMinimal.h"
#include "BaseBannerData.h"
#include "MarketingBannerData.generated.h"

USTRUCT(BlueprintType)
struct FMarketingBannerData: public FBaseBannerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText SubTitleId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DeepLink;

public:
	DYNAMICCONTENT_API FMarketingBannerData();
};

FORCEINLINE uint32 GetTypeHash(const FMarketingBannerData) { return 0; }
