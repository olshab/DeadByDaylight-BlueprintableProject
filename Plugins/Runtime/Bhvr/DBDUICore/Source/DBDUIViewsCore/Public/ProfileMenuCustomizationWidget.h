#pragma once

#include "CoreMinimal.h"
#include "ProfileMenuCustomizationViewInterface.h"
#include "CoreTabContentWidget.h"
#include "EItemSorting.h"
#include "ECustomizationCategory.h"
#include "ProfileMenuCustomizationWidget.generated.h"

class UCustomizationItemGridContainer;
class UCoreImagePreviewAreaWidget;
class UCoreSortButtonWidget;
class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UProfileMenuCustomizationWidget : public UCoreTabContentWidget, public IProfileMenuCustomizationViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreSortButtonWidget* SortButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCustomizationItemGridContainer* CustomizationGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreImagePreviewAreaWidget* PreviewArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* EquipInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _noBannerSelectedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _noBadgeSelectedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory _customizationCategory;

protected:
	UFUNCTION(BlueprintCallable)
	void OnEquipButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSortingChanged(const EItemSorting itemSorting);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationGridItemClicked(const int32 selectedIndex);

public:
	UProfileMenuCustomizationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuCustomizationWidget) { return 0; }
