#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETooltipVerticalAlignment.h"
#include "Layout/Margin.h"
#include "CoreSelectableButtonWidget.h"
#include "EStoreItemLayout.h"
#include "ETooltipHorizontalAlignment.h"
#include "CoreStoreItemWidget.generated.h"

class UVerticalBox;
class UScaleBox;
class UDBDImage;
class UWidget;
class UCorePriceTagWidget;
class UCoreOnHoverBorderWidget;
class UTextBlock;
class UStoreItemViewData;
class UCoreButtonWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FMargin _priceTagPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCorePriceTagWidget> _priceTagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment _tooltipHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment _tooltipVerticalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScaleBox* LayoutScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidget* SelectedOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* PriceTagsVerticalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* OwnedTagText;

public:
	UFUNCTION(BlueprintCallable)
	void SetStoreItemLayout(int32 layoutMask);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreItemData(UStoreItemViewData* data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSmallTemplate(bool useSmallTemplate);

	UFUNCTION(BlueprintCallable)
	void SetScale(float scale);

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonUnhovered(UCoreButtonWidget* targetButton);

	UFUNCTION(BlueprintCallable)
	void OnButtonSelectedChanged(UCoreSelectableButtonWidget* targetButton, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnButtonHovered(UCoreButtonWidget* targetButton);

	UFUNCTION(BlueprintPure)
	bool IsTagVisible(EStoreItemLayout tag) const;

public:
	UCoreStoreItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreItemWidget) { return 0; }
