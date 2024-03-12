#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedCharacterSlotRecommendationData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedCharacterSlotRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Role;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedCharacterSlotRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterSlotRecommendationData) { return 0; }
