#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PriceTagViewData.h"
#include "StoreItemViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreItemViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNewInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString LimitedTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DiscountTimeText;

public:
	UStoreItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreItemViewData) { return 0; }
