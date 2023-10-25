#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreItemViewData.h"
#include "StoreSpecialOfferItemViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialOfferItemViewData : public UStoreItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime SpecialOfferEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStoreItemViewData* Item;

public:
	UStoreSpecialOfferItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialOfferItemViewData) { return 0; }
