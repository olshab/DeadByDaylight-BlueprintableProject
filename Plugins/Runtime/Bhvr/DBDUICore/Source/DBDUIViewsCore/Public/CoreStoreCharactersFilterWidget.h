#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersFilterViewInterface.h"
#include "ESortingOption.h"
#include "OnClearFiltersClickedDelegate.h"
#include "OnStoreFiltersChangedDelegate.h"
#include "CoreStoreCharactersFilterWidget.generated.h"

class UCoreButtonWidget;
class UCoreSortButtonWidget;
class UPanelWidget;
class UCoreFilterButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersFilterWidget : public UCoreBaseUserWidget, public IStoreCharactersFilterViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* ClearFiltersButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSortButtonWidget* SortButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* CheckBoxesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sortingOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESortingOption _defaultSortingOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreFilterButtonWidget*> _filtersCheckBoxArray;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnClearFiltersClickedDelegate _onClearFiltersClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnStoreFiltersChangedDelegate _onFiltersChanged;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleWidgetVisibility();

	UFUNCTION(BlueprintCallable)
	void OnFilterOptionCheckBoxToggled();

	UFUNCTION(BlueprintCallable)
	void OnClearFiltersClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreCharactersFilterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersFilterWidget) { return 0; }
