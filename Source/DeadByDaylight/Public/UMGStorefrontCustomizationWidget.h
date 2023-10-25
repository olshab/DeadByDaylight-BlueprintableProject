#pragma once

#include "CoreMinimal.h"
#include "UMGPromoPackItemWidget.h"
#include "UMGStorefrontCustomizationWidget.generated.h"

class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGStorefrontCustomizationWidget : public UUMGPromoPackItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CustomizationQuantityText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CustomizationQuantityPanel;

public:
	UUMGStorefrontCustomizationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStorefrontCustomizationWidget) { return 0; }
