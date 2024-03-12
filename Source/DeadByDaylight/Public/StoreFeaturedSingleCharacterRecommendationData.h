#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedRecommendationImageData.h"
#include "StoreFeaturedSingleCharacterRecommendationData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedSingleCharacterRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreFeaturedRecommendationImageData Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedSingleCharacterRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedSingleCharacterRecommendationData) { return 0; }
