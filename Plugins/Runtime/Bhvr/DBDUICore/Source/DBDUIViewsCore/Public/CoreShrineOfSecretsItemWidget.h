#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ShrineOfSecretsPurchaseButtonClickedDelegate.h"
#include "ShrineOfSecretsItemViewData.h"
#include "CoreShrineOfSecretsItemWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UDBDRichTextBlock;
class UCoreMenuPerkWidget;
class UDBDTextBlock;
class UCoreCurrencyButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreShrineOfSecretsItemWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FShrineOfSecretsPurchaseButtonClickedDelegate PurchaseButtonClickedDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* Perk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* CheckmarkIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PerkNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* CharacterNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* BPConversionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreCurrencyButtonWidget* CurrencyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PerkMaxedTB;

private:
	UFUNCTION(BlueprintCallable)
	void ShowPerkTooltip(UCoreButtonWidget* hoveredSlotWidget);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVisuals(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayUnlockAnimation();

private:
	UFUNCTION(BlueprintCallable)
	void OnPurchaseButtonClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void HidePerkTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	UCoreShrineOfSecretsItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreShrineOfSecretsItemWidget) { return 0; }
