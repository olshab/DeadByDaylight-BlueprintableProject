#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedSingleChapterPackRecommendationData.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedChapterPackRecommendationData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedChapterPackRecommendationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreFeaturedSingleChapterPackRecommendationData> ChapterPacks;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveTo;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedChapterPackRecommendationData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedChapterPackRecommendationData) { return 0; }
