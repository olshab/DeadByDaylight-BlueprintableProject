#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPackCatalogPrice.h"
#include "StoreSpecialPackCatalogItemMetaData.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackCatalogItemMetaData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreSpecialPackCatalogPrice> FullPrice;

	UPROPERTY(EditAnywhere, Transient)
	uint32 SortOrder;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackCatalogItemMetaData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackCatalogItemMetaData) { return 0; }
