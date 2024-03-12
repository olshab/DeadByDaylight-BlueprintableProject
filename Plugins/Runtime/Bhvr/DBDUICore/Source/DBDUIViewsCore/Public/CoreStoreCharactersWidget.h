#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "StoreItemEquipClickedDelegate.h"
#include "Layout/Margin.h"
#include "StoreCharactersViewInterface.h"
#include "CoreStoreBaseSubTabsWidget.h"
#include "StoreItemEquipAllClickedDelegate.h"
#include "StoreItemUnlockClickedDelegate.h"
#include "StoreItemAlternativeUnlockClickedDelegate.h"
#include "StoreItemSelectAllClickedDelegate.h"
#include "StoreItemPlayMoriClickedDelegate.h"
#include "Framework/Text/TextLayout.h"
#include "StoreItemZoomCharmClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCharactersWidget.generated.h"

class UCoreCurrencyInputSwitcherWidget;
class UDBDTextBlock;
class UCoreButtonWidget;
class UVerticalBox;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersWidget : public UCoreStoreBaseSubTabsWidget, public IStoreCharactersViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemUnlockClickedDelegate _characterUnlockClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemUnlockClickedDelegate _customizationUnlockClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemEquipClickedDelegate _characterEquipClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemEquipClickedDelegate _customizationEquipClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemEquipAllClickedDelegate _customizationEquipAllClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemSelectAllClickedDelegate _customizationSelectAllClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemAlternativeUnlockClickedDelegate _characterAlternativeUnlockClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemAlternativeUnlockClickedDelegate _customizationAlternativeUnlockClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemPlayMoriClickedDelegate _playMoriClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreItemZoomCharmClickedDelegate _zoomCharmClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCurrencyInputSwitcherWidget> _currencySwitcherWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedCurrencyButtonCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FMargin _currencyButtonPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TEnumAsByte<ETextJustify::Type> _currencyButtonAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SelectedCharacterNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* CurrencyButtonsTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* CurrencyButtonsVerticalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* EquipButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* EquipAllButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* SelectAllButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* AlternativeUnlockButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* AlternativeUnlockMessageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* AlternativeUnlockNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* PlayMoriButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* ZoomCharmButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCorePreConstructableList* _currencyButtonList;

protected:
	UFUNCTION(BlueprintCallable)
	void OnZoomCharmClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnPlayMoriClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnItemUnlockTriggered(const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnItemSelectAllClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnItemEquipClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnItemEquipAllClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnItemAlternativeUnlockClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreStoreCharactersWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersWidget) { return 0; }
