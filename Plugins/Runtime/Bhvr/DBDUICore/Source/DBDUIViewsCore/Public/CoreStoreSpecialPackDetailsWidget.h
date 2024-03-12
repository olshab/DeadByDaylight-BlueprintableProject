#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksDetailsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreSpecialPackDetailsWidget.generated.h"

class UCoreStoreArchivePassItemWidget;
class UCoreStoreCharacterItemWidget;
class UCoreCurrencyButtonWidget;
class UDBDRichTextBlock;
class UDBDImage;
class UPanelWidget;
class UDBDTextBlock;
class UCorePremiumCurrencyButtonWidget;
class UCoreStoreArchiveFragmentItemWidget;
class UCoreStoreCustomizationItemWidget;
class UStoreSpecialPackViewData;
class UCorePreConstructableList;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreSpecialPackDetailsWidget : public UCoreBaseUserWidget, public IStoreSpecialPacksDetailsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* PackIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PackTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* OwnedTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* SubTextRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* ContentPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreCurrencyButtonWidget* CurrencyBuyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePremiumCurrencyButtonWidget* PremiumBuyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreArchivePassItemWidget* ArchivePassItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreArchiveFragmentItemWidget* ArchiveFragmentItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCharacterItemWidget> _characterItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _characterPoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _customizationPoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStoreSpecialPackViewData* _data;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _characterList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _customizationList;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnShowAnimationFinished();

private:
	UFUNCTION(BlueprintCallable)
	void OnPremiumButtonClicked(UCoreButtonWidget* button);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnHideAnimationFinished();

private:
	UFUNCTION(BlueprintCallable)
	void OnCustomizationClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnCurrencyButtonClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnCharacterClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnArchivePassClicked(UCoreButtonWidget* button);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AnimateShow();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AnimateHide();

public:
	UCoreStoreSpecialPackDetailsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPackDetailsWidget) { return 0; }
