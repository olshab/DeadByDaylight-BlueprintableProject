#pragma once

#include "CoreMinimal.h"
#include "ChapterPackCustomizationClickedDelegate.h"
#include "CoreSelectableButtonWidget.h"
#include "ChapterPackSeenDelegate.h"
#include "ChapterPackBuyButtonActionDelegate.h"
#include "ChapterPackCharacterClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreChapterPackItemWidget.generated.h"

class UCorePreConstructableList;
class UHorizontalBox;
class UCorePremiumCurrencyButtonWidget;
class UStoreChapterPackViewData;
class UCoreStoreCustomizationItemWidget;
class UDBDTextBlock;
class UCoreStoreCharacterItemWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreChapterPackItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChapterPackSeenDelegate SeenDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChapterPackBuyButtonActionDelegate BuyPremiumActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChapterPackCharacterClickedDelegate CharacterClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChapterPackCustomizationClickedDelegate CustomizationClickedDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* CharactersBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* CustomizationsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
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
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetExpanded(bool expanded);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(UStoreChapterPackViewData* data);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPremiumBuyButtonClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnCharacterClicked(UCoreButtonWidget* button);

public:
	UCoreStoreChapterPackItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreChapterPackItemWidget) { return 0; }
