#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersSelectionViewInterface.h"
#include "StoreCharacterSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCharactersSelectionWidget.generated.h"

class UCoreStoreCharacterItemWidget;
class UUniformGridPanel;
class UScrollBox;
class UCoreStoreCharactersFilterWidget;
class UCorePreConstructableList;
class UCoreSelectableButtonWidget;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* Scroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreStoreCharactersFilterWidget* FiltersWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCoreStoreCharacterItemWidget* _selectedItem;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _characterList;

protected:
	UFUNCTION(BlueprintCallable)
	void OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

public:
	UCoreStoreCharactersSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersSelectionWidget) { return 0; }
