#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedRecommendationImageData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedRecommendationImageData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Path;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedRecommendationImageData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedRecommendationImageData) { return 0; }
