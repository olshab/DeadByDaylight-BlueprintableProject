#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "PurchaseCurrencyData.h"
#include "UMGCharacterPrice.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrice : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PriceTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor AffordableColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor UnaffordableColor;

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrencyData(const FPurchaseCurrencyData& currencyData);

public:
	UUMGCharacterPrice();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPrice) { return 0; }
