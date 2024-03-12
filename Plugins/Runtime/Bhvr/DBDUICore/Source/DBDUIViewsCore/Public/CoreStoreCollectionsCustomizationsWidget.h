#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "StoreCollectionsCustomizationsViewInterface.h"
#include "StoreCollectionItemUnlockClickedDelegate.h"
#include "Framework/Text/TextLayout.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "StoreCollectionItemEquipedDelegate.h"
#include "Layout/Margin.h"
#include "CoreStoreCollectionsCustomizationsWidget.generated.h"

class UCoreCurrencyInputSwitcherWidget;
class UDBDTextBlock;
class UCorePreConstructableList;
class UHorizontalBox;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCollectionsCustomizationsWidget : public UCoreBaseUserWidget, public IStoreCollectionsCustomizationsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCollectionItemUnlockClickedDelegate _onCollectionItemUnlockClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCollectionItemEquipedDelegate _onCollectionItemEquipClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCurrencyInputSwitcherWidget> _currencySwitcherWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedCurrencyButtonCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FMargin _currencyButtonPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TEnumAsByte<ETextJustify::Type> _currencyButtonAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* CurrencyButtonsTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* CurrencyButtonsHorizontalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* EquipButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCorePreConstructableList* _currencyButtonList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* CollectionNameTB;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemUnlockTriggered(const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnItemEquipClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreCollectionsCustomizationsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsCustomizationsWidget) { return 0; }
