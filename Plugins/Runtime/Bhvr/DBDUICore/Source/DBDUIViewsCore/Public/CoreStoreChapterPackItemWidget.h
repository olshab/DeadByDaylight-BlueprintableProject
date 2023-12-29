#pragma once

#include "CoreMinimal.h"
#include "SpecialPackBuyActionDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStoreChapterPackItemWidget.generated.h"

class UCoreStoreCustomizationItemWidget;
class UDBDTextBlock;
class UCorePreConstructableList;
class UHorizontalBox;
class UCorePremiumCurrencyButtonWidget;
class UCoreStoreCharacterItemWidget;
class UStoreChapterPackViewData;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreChapterPackItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialPackBuyActionDelegate BuyPremiumActionDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* CharactersBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* CustomizationsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCorePremiumCurrencyButtonWidget* PremiumBuyButton;

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
	UStoreChapterPackViewData* _data;

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
	void SetData(UStoreChapterPackViewData* data);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPremiumBuyButtonClicked(UCoreButtonWidget* button);

public:
	UCoreStoreChapterPackItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreChapterPackItemWidget) { return 0; }
