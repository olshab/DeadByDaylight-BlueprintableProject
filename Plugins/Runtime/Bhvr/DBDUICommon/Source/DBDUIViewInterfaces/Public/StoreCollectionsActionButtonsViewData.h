#pragma once

#include "CoreMinimal.h"
#include "PriceTagViewData.h"
#include "StoreCollectionsActionButtonsViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCollectionsActionButtonsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTags;

public:
	DBDUIVIEWINTERFACES_API FStoreCollectionsActionButtonsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionsActionButtonsViewData) { return 0; }
