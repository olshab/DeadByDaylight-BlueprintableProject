#pragma once

#include "CoreMinimal.h"
#include "StoreCharactersFilterViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "OnClearFiltersClickedDelegate.h"
#include "OnStoreFiltersChangedDelegate.h"
#include "EItemFilterOption.h"
#include "CoreStoreCharactersFilterWidget.generated.h"

class UCoreButtonWidget;
class UPanelWidget;
class UCoreFilterButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersFilterWidget : public UCoreBaseUserWidget, public IStoreCharactersFilterViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* ClearFiltersButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* CheckBoxesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreFilterButtonWidget*> FiltersCheckBoxArray;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnClearFiltersClickedDelegate _onClearFiltersClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnStoreFiltersChangedDelegate _onFiltersChanged;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleWidgetVisibility();

	UFUNCTION(BlueprintCallable)
	void OnFilterOptionCheckBoxToggled(bool isToggled, EItemFilterOption itemFilterOption);

	UFUNCTION(BlueprintCallable)
	void OnClearFiltersClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreCharactersFilterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersFilterWidget) { return 0; }
