#pragma once

#include "CoreMinimal.h"
#include "StoreRecommendationCustomizationItemsRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FStoreRecommendationCustomizationItemsRuntimeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> IDs;

public:
	DEADBYDAYLIGHT_API FStoreRecommendationCustomizationItemsRuntimeData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreRecommendationCustomizationItemsRuntimeData) { return 0; }
