#pragma once

#include "CoreMinimal.h"
#include "StoreRecommendationCustomizationRuntimeData.h"
#include "StoreFeaturedCharacterRecommendationData.h"
#include "StoreFeaturedChapterPackRecommendationData.h"
#include "StoreRecommendationRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FStoreRecommendationRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreRecommendationCustomizationRuntimeData> FeaturedCustomizationRecommendations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreFeaturedCharacterRecommendationData> FeaturedCharacterRecommendations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreFeaturedChapterPackRecommendationData> FeaturedChapterPackRecommendations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreRecommendationCustomizationRuntimeData> SpecialsRecommendations;

public:
	DEADBYDAYLIGHT_API FStoreRecommendationRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreRecommendationRuntimeData) { return 0; }
