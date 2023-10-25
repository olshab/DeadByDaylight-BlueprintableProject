#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "PresenterParentInfo.h"
#include "Layout/Margin.h"
#include "GridPresenterParentInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGridPresenterParentInfo : public UPresenterParentInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin Padding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Nudge;

	UPROPERTY(EditAnywhere)
	uint32 Row;

	UPROPERTY(EditAnywhere)
	uint32 Column;

public:
	UGridPresenterParentInfo();
};

FORCEINLINE uint32 GetTypeHash(const UGridPresenterParentInfo) { return 0; }
