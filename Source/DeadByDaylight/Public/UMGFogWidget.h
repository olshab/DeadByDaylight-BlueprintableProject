#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGFogWidget.generated.h"

class UUMGBankAndPlayerInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGFogWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData);

	UFUNCTION(BlueprintCallable)
	void OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData);

	UFUNCTION(BlueprintCallable)
	void OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void HandleOnSettingButtonClick();

public:
	UUMGFogWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFogWidget) { return 0; }
