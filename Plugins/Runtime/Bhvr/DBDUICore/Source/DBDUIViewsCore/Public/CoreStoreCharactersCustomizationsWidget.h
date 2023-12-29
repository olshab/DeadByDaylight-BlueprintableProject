#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersCustomizationsViewInterface.h"
#include "StoreCustomizationSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "StoreCategorySelectedDelegate.h"
#include "CoreStoreCharactersCustomizationsWidget.generated.h"

class UUniformGridPanel;
class UCoreStoreCustomizationItemWidget;
class UScrollBox;
class UCoreStoreCategoryWidget;
class UCoreStoreCharactersFilterWidget;
class UCorePreConstructableList;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersCustomizationsWidget : public UCoreBaseUserWidget, public IStoreCharactersCustomizationsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCustomizationSelectedDelegate _customizationSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCategorySelectedDelegate _categorySelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCategoryWidget> _categoryItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _customizationItemScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* CustomizationsScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* CustomizationsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* CategoriesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreStoreCharactersFilterWidget* FiltersWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreStoreCustomizationItemWidget*> _selectedCustomizationItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _maxSelectedItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCoreStoreCategoryWidget* _selectedCategoryItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedCategoriesCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedCustomizationsCount;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _categoryList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _customizationList;

protected:
	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelectedAgain(UCoreSelectableButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCategorySelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

public:
	UCoreStoreCharactersCustomizationsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersCustomizationsWidget) { return 0; }
