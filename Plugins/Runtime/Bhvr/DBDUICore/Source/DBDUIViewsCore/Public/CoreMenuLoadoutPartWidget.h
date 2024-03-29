#pragma once

#include "CoreMinimal.h"
#include "ETooltipVerticalAlignment.h"
#include "CoreSelectableButtonWidget.h"
#include "ETooltipHorizontalAlignment.h"
#include "ELoadoutSlot.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.generated.h"

class UMenuLoadoutPartViewData;
class UScaleBox;
class UDBDImage;
class UCoreOnHoverBorderWidget;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuLoadoutPartWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELoadoutSlot SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FLoadoutTooltipData _loadoutTooltipViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* RarityIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* IconIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* KillSwitchIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* LockedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* Background;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* ShadowOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* Selected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UScaleBox* LayoutScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* StackCountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* PlusSignIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* RarityTexture;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _itemId;

public:
	UFUNCTION(BlueprintCallable)
	void SetSelectedState(bool selectedState);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartScale(float scale);

protected:
	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartData(const UMenuLoadoutPartViewData* data);

public:
	UFUNCTION(BlueprintCallable)
	void SetIsPerkSurfacingExperimentActive(bool isPerkSurfacingExperimentActive);

	UFUNCTION(BlueprintCallable)
	void SetEmptyWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetDisabledWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBackgroundShadowLayers();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBackgroundLayers();

	UFUNCTION(BlueprintCallable)
	bool GetWidgetLockedState();

	UFUNCTION(BlueprintCallable)
	FName GetWidgetItemId();

	UFUNCTION(BlueprintCallable)
	FLoadoutTooltipData GetTooltipData();

public:
	UCoreMenuLoadoutPartWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuLoadoutPartWidget) { return 0; }
