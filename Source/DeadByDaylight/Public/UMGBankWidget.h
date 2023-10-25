#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGBankWidget.generated.h"

class UUMGCurrencyWidget;
class UUMGAuricCellsButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBankWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCurrencyWidget* BloodPointsCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAuricCellsButton* CellsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCurrencyWidget* IridescentShardsCurrency;

protected:
	UFUNCTION(BlueprintCallable)
	void OnPurchaseAuricCellsClicked();

	UFUNCTION(BlueprintCallable)
	void OnCurrencyTooltipRequested(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

public:
	UUMGBankWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBankWidget) { return 0; }
