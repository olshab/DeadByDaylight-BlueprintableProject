#pragma once

#include "CoreMinimal.h"
#include "PriceTagViewData.h"
#include "ArchivePassTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchivePassTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPriceTagViewData Price;

public:
	DBDUIVIEWINTERFACES_API FArchivePassTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivePassTooltipViewData) { return 0; }
