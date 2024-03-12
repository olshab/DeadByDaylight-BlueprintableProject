#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedKillerEditorData.h"
#include "StoreFeaturedSurvivorEditorData.h"
#include "StoreFeaturedCharacterRecommendationEditorData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedCharacterRecommendationEditorData: public FDBDTableRowBase
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
	TArray<EPlayerRole> Slots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStoreFeaturedKillerEditorData> Killers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStoreFeaturedSurvivorEditorData> Survivors;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedCharacterRecommendationEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterRecommendationEditorData) { return 0; }
