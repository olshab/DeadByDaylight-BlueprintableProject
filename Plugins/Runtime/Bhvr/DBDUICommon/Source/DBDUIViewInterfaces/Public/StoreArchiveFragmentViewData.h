#pragma once

#include "CoreMinimal.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "StoreArchiveFragmentViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreArchiveFragmentViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ArchiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCurrencyProgressionTooltipViewData TooltipData;

public:
	DBDUIVIEWINTERFACES_API FStoreArchiveFragmentViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreArchiveFragmentViewData) { return 0; }
