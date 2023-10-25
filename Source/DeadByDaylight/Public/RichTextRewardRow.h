#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Engine/DataTable.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "RichTextRewardRow.generated.h"

USTRUCT(BlueprintType)
struct FRichTextRewardRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTextBlockStyle TextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin TextMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush Brush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush TintsBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush BackgroundBrush;

public:
	DEADBYDAYLIGHT_API FRichTextRewardRow();
};

FORCEINLINE uint32 GetTypeHash(const FRichTextRewardRow) { return 0; }
