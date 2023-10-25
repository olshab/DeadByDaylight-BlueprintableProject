#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGStoreEventItemsPackButton.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UImage;
class UTextBlock;
class UUMGAtlEndDateTimerWidget;
class UUMGAtlStorePriceWidget;
class UUniformGridPanel;
class UUMGAtlEventItemWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGStoreEventItemsPackButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UImage* ImageIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* CurrencyAmountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* CurrencyNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUniformGridPanel* UniformGridPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGBaseButtonWidget* BuyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGAtlStorePriceWidget* StorePriceWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGAtlEndDateTimerWidget* EndDateTimerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCanvasPanel* SelectedImageBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UUMGAtlEventItemWidget> EventItemWidgetClassPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 nbColumns;

private:
	UFUNCTION(BlueprintCallable)
	void ShowSelectedCanvas();

	UFUNCTION(BlueprintCallable)
	void HideSelectedCanvas();

	UFUNCTION(BlueprintCallable)
	void HandleEndDateTimerReached();

	UFUNCTION(BlueprintCallable)
	void HandleButtonClicked();

public:
	UUMGStoreEventItemsPackButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStoreEventItemsPackButton) { return 0; }
