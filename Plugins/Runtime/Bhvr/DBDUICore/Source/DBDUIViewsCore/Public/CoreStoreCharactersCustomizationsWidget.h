#pragma once

#include "CoreMinimal.h"
#include "StoreCharmSlotSelectedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersCustomizationsViewInterface.h"
#include "StoreCustomizationSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "StorePresetSelectedDelegate.h"
#include "StoreCategorySelectedDelegate.h"
#include "Layout/Margin.h"
#include "CoreStoreCharactersCustomizationsWidget.generated.h"

class UCoreSelectableButtonWidget;
class UUniformGridPanel;
class UCoreStoreCustomizationItemWidget;
class UDBDScrollBox;
class UCoreStoreCategoryWidget;
class UCoreStorePresetWidget;
class UCoreStoreCharmSlotWidget;
class UHorizontalBox;
class UCoreStoreEmptyItemWidget;
class UCoreStoreCharactersFilterWidget;
class UCoreSearchBarWidget;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersCustomizationsWidget : public UCoreBaseUserWidget, public IStoreCharactersCustomizationsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCustomizationSelectedDelegate _customizationSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCategorySelectedDelegate _categorySelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCharmSlotSelectedDelegate _charmSlotSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStorePresetSelectedDelegate _presetSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCategoryWidget> _categoryItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCharmSlotWidget> _charmSlotItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStorePresetWidget> _presetItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _customizationItemScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* CustomizationsScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* CustomizationsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* CategoriesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* CharmSlotsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* PresetsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreEmptyItemWidget* EmptyItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreCharactersFilterWidget* FiltersWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSearchBarWidget* SearchBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreStoreCustomizationItemWidget*> _allCustomizationItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCoreStoreCustomizationItemWidget* _selectedCustomizationItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCoreStoreCategoryWidget* _selectedCategoryItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCoreStoreCharmSlotWidget* _selectedCharmSlotItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCoreStorePresetWidget* _selectedPresetItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedCategoriesCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedCustomizationsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedCharmSlotsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedPresetsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FMargin _charmSlotsPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FMargin _presetsPadding;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _categoryList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _customizationList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _charmSlotList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _presetList;

protected:
	UFUNCTION(BlueprintCallable)
	void OnPresetSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnEmptyItemSelectedAgain(UCoreSelectableButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnEmptyItemSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelectedAgain(UCoreSelectableButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCharmSlotSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCategorySelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

public:
	UCoreStoreCharactersCustomizationsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersCustomizationsWidget) { return 0; }
