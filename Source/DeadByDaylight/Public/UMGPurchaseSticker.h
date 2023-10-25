#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPurchaseSticker.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPurchaseSticker : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextDiscount;

public:
	UUMGPurchaseSticker();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPurchaseSticker) { return 0; }
