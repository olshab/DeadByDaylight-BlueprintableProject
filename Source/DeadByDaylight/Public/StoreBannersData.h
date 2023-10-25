#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "StoreFeaturedBannerData.h"
#include "EStoreBannerLocation.h"
#include "StoreBannersData.generated.h"

USTRUCT(BlueprintType)
struct FStoreBannersData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BannerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreFeaturedBannerData BannerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseAsDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStoreBannerLocation DefaultLocation;

public:
	DEADBYDAYLIGHT_API FStoreBannersData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreBannersData) { return 0; }
