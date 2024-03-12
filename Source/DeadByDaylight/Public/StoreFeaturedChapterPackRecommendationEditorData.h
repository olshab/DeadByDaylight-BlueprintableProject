#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedChapterPackEditorData.h"
#include "StoreFeaturedChapterPackRecommendationEditorData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedChapterPackRecommendationEditorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStoreFeaturedChapterPackEditorData> ChapterPacks;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedChapterPackRecommendationEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedChapterPackRecommendationEditorData) { return 0; }
