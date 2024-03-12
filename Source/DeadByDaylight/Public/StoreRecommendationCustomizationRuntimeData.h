#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreRecommendationCustomizationItemsRuntimeData.h"
#include "StoreRecommendationCustomizationRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FStoreRecommendationCustomizationRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime ActiveTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FString> CategoryPriorities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreRecommendationCustomizationItemsRuntimeData> Recommendations;

public:
	DEADBYDAYLIGHT_API FStoreRecommendationCustomizationRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreRecommendationCustomizationRuntimeData) { return 0; }
