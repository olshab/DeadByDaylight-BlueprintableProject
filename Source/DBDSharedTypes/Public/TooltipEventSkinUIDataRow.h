#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TooltipEventSkinUIDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTooltipEventSkinUIDataRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventBannerLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* HeaderDecorationTexture;

public:
	DBDSHAREDTYPES_API FTooltipEventSkinUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FTooltipEventSkinUIDataRow) { return 0; }
