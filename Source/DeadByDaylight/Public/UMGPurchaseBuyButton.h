#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPurchaseBuyButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPurchaseBuyButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PriceText;

public:
	UUMGPurchaseBuyButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPurchaseBuyButton) { return 0; }
