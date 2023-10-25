#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "UMGBaseButtonWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseCurrencyButtonWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseCurrencyButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* FXImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyColorImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PriceText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor AffordableColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor NotAffordableColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DisabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor EnabledOpacity;

public:
	UUMGBaseCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseCurrencyButtonWidget) { return 0; }
