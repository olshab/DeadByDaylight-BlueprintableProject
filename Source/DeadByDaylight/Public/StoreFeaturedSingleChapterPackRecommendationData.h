#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedRecommendationImageData.h"
#include "StoreFeaturedSingleChapterPackRecommendationData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedSingleChapterPackRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AssociatedDlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreFeaturedRecommendationImageData Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedSingleChapterPackRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedSingleChapterPackRecommendationData) { return 0; }
