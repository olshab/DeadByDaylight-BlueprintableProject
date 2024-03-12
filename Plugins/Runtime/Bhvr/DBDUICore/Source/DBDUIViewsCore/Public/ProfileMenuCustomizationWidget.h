#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "ProfileMenuCustomizationViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ECustomizationCategory.h"
#include "ProfileMenuCustomizationWidget.generated.h"

class UCustomizationItemGridContainer;
class UCoreImagePreviewAreaWidget;
class ISearchBarViewInterface;
class UCoreSortButtonWidget;
class UCoreInputSwitcherWidget;
class UCoreSearchBarWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UProfileMenuCustomizationWidget : public UCoreTabContentWidget, public IProfileMenuCustomizationViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSortButtonWidget* SortButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sortingOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCustomizationItemGridContainer* CustomizationGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreImagePreviewAreaWidget* PreviewArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* EquipInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _noBannerSelectedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _noBadgeSelectedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory _customizationCategory;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TScriptInterface<ISearchBarViewInterface> _searchBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCoreSearchBarWidget* SearchBar;

protected:
	UFUNCTION(BlueprintCallable)
	void OnEquipButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationGridItemClicked(const int32 selectedIndex);

public:
	UProfileMenuCustomizationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuCustomizationWidget) { return 0; }
