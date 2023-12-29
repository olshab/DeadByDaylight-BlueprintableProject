#pragma once

#include "CoreMinimal.h"
#include "SpecialPackBuyActionDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStoreSpecialPacksPackItemWidget.generated.h"

class UCoreStoreCustomizationItemWidget;
class UDBDTextBlock;
class UCorePreConstructableList;
class UHorizontalBox;
class UCoreCurrencySwitcherWidget;
class UCoreStoreCharacterItemWidget;
class UStoreSpecialPackViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreSpecialPacksPackItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialPackBuyActionDelegate BuyWithCurrencyActionDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TimerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* CharactersBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* CustomizationsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreCurrencySwitcherWidget* CurrencyBuyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isExpanded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _initialItemPoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCharacterItemWidget> _characterItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationItemWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSpecialPackViewData* _data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _characterList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _customizationList;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleExpanded();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetExpanded(bool expanded);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(UStoreSpecialPackViewData* data);

protected:
	UFUNCTION(BlueprintCallable)
	void OnCurrencyBuyButtonClicked();

public:
	UCoreStoreSpecialPacksPackItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksPackItemWidget) { return 0; }
