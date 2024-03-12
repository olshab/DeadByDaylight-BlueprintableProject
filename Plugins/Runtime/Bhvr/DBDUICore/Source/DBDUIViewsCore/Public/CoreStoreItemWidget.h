#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETooltipVerticalAlignment.h"
#include "Layout/Margin.h"
#include "CoreSelectableButtonWidget.h"
#include "EStoreItemLayout.h"
#include "ETooltipHorizontalAlignment.h"
#include "EFlagSize.h"
#include "CoreStoreItemWidget.generated.h"

class UWidget;
class UCorePriceTagWidget;
class UCoreTimerFlagWidget;
class UVerticalBox;
class UDBDImage;
class UScaleBox;
class UCoreOnHoverBorderWidget;
class UTextBlock;
class UCorePreConstructableList;
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
	FMargin _timerFlagPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCorePriceTagWidget> _priceTagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreTimerFlagWidget> _timerFlagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedPriceTagCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedTimerFlagCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment _tooltipHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment _tooltipVerticalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* ItemIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UScaleBox* LayoutScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UWidget* SelectedOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* TimerFlagVerticalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* PriceTagsVerticalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* UnavailableTagTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCorePreConstructableList* _priceTagsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCorePreConstructableList* _timerFlagsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagSize _flagSize;

public:
	UFUNCTION(BlueprintCallable)
	void SetTimerFlagSize(EFlagSize flagSize);

	UFUNCTION(BlueprintCallable)
	void SetStoreItemLayout(int32 layoutMask);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreItemData(UStoreItemViewData* data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSmallTemplate(bool useSmallTemplate);

	UFUNCTION(BlueprintCallable)
	void SetScale(float scale);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNotificationTag(const bool isNew);

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonUnhovered(UCoreButtonWidget* targetButton);

	UFUNCTION(BlueprintCallable)
	void OnButtonSelectedChanged(UCoreSelectableButtonWidget* targetButton, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnButtonHovered(UCoreButtonWidget* targetButton);

	UFUNCTION(BlueprintPure)
	bool IsTagVisible(EStoreItemLayout tag) const;

	UFUNCTION(BlueprintCallable)
	UCoreTimerFlagWidget* CreateTimerFlagWidget();

	UFUNCTION(BlueprintCallable)
	UCorePriceTagWidget* CreatePriceTagWidget();

	UFUNCTION(BlueprintCallable)
	void ClearTimerFlagWidgets();

	UFUNCTION(BlueprintCallable)
	void ClearPriceTagWidgets();

public:
	UCoreStoreItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreItemWidget) { return 0; }
