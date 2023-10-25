#pragma once

#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "DBDWrapBoxSlot.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWSCORE_API UDBDWrapBoxSlot : public UPanelSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin Padding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFillEmptySpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FillSpanWhenLessThan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

public:
	UFUNCTION(BlueprintCallable)
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void SetPadding(FMargin InPadding);

	UFUNCTION(BlueprintCallable)
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	UFUNCTION(BlueprintCallable)
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);

	UFUNCTION(BlueprintCallable)
	void SetFillEmptySpace(bool InbFillEmptySpace);

public:
	UDBDWrapBoxSlot();
};

FORCEINLINE uint32 GetTypeHash(const UDBDWrapBoxSlot) { return 0; }
