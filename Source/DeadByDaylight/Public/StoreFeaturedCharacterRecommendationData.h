#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedSingleCharacterRecommendationData.h"
#include "StoreFeaturedCharacterSlotRecommendationData.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedCharacterRecommendationData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedCharacterRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreFeaturedCharacterSlotRecommendationData> Slots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreFeaturedSingleCharacterRecommendationData> Killer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreFeaturedSingleCharacterRecommendationData> Survivor;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveTo;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedCharacterRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterRecommendationData) { return 0; }
