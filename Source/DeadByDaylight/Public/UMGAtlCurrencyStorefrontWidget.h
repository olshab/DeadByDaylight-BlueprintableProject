#pragma once

#include "CoreMinimal.h"
#include "UMGBaseCurrencyStorefrontWidget.h"
#include "Layout/Margin.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlCurrencyStorefrontWidget.generated.h"

class UHorizontalBox;
class UCanvasPanel;
class URichTextBlock;
class UUniformGridPanel;
class UOverlay;
class UUMGStoreEventItemsPackButton;
class UImage;
class UUMGStoreAuricCellButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlCurrencyStorefrontWidget : public UUMGBaseCurrencyStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AuricCellsCanvasPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* AuricCellsGridPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* BottomPurchaseBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URichTextBlock* BottomRightPurchaseRichText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* BottomTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* AuricsBgR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* AuricsBgL;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHorizontalBox* EventItemsPackContainerBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FMargin PaddingEventItemsPackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UUMGStoreEventItemsPackButton> EventItemsPackWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGStoreAuricCellButton*> _auricCellButtons;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateFirstPurchaseForAllAuricCellsEndInUI(const FString& endInText);

public:
	UUMGAtlCurrencyStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlCurrencyStorefrontWidget) { return 0; }
