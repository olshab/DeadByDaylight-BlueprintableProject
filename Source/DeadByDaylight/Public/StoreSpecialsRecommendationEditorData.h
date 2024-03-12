#pragma once

#include "CoreMinimal.h"
#include "StoreRecommendationCustomizationEditorData.h"
#include "StoreSpecialsRecommendationEditorData.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialsRecommendationEditorData: public FStoreRecommendationCustomizationEditorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AuricCellOffer;

public:
	DEADBYDAYLIGHT_API FStoreSpecialsRecommendationEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialsRecommendationEditorData) { return 0; }
