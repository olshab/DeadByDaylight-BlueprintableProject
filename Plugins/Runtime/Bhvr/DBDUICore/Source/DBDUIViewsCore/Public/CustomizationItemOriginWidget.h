#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "PriceTagViewData.h"
#include "CustomizationItemOriginViewData.h"
#include "CustomizationItemOriginWidget.generated.h"

class UDBDImage;
class UCoreCurrencySwitcherWidget;
class UDBDRichTextBlock;
class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCustomizationItemOriginWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* InstructionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* InstructionImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* UnlockTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* UnlockSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreCurrencySwitcherWidget* CurrencyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* ArchivesButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* StoreButton;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreState();

	UFUNCTION(BlueprintCallable)
	void SetState(const FCustomizationItemOriginViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMilestonePointsState(const TArray<FText>& args);

public:
	UFUNCTION(BlueprintCallable)
	void SetInputSwitcherEnabled(UCoreInputSwitcherWidget* inputSwitcher, const bool enabled);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetGameplayState(const TArray<FText>& args);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetDefaultState();

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const FCustomizationItemOriginViewData& viewData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrencyPurchaseState(const FPriceTagViewData& currencyData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetArchivesState(const TArray<FText>& args);

	UFUNCTION(BlueprintCallable)
	void OnButtonClick();

public:
	UFUNCTION(BlueprintCallable)
	void DisableStoreButton();

	UFUNCTION(BlueprintCallable)
	void DisableInputs();

	UFUNCTION(BlueprintCallable)
	void DisableCurrencyButton();

	UFUNCTION(BlueprintCallable)
	void DisableArchivesButton();

public:
	UCustomizationItemOriginWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationItemOriginWidget) { return 0; }
