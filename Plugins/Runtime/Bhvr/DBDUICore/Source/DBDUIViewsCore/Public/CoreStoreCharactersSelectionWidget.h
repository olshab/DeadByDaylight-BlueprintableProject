#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersSelectionViewInterface.h"
#include "StoreCharacterSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCharactersSelectionWidget.generated.h"

class UCoreStoreCharacterItemWidget;
class UCoreSearchBarWidget;
class UDBDScrollBox;
class UCoreStoreCharactersFilterWidget;
class UUniformGridPanel;
class UCoreButtonWidget;
class UCoreStoreCharacterPerksToastWidget;
class UCoreSelectableButtonWidget;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersSelectionWidget : public UCoreBaseUserWidget, public IStoreCharactersSelectionViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCharacterSelectedDelegate _characterSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCharacterItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _itemScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreCharactersFilterWidget* FiltersWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSearchBarWidget* SearchBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* PerksToastButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreCharacterPerksToastWidget* PerksToast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreStoreCharacterItemWidget*> _allCharacterItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCoreStoreCharacterItemWidget* _selectedItem;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _characterList;

protected:
	UFUNCTION(BlueprintCallable)
	void OnPerkToastButtonClick(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

public:
	UCoreStoreCharactersSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersSelectionWidget) { return 0; }
