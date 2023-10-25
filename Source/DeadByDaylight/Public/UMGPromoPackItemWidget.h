#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPromoPackItemWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPromoPackItemWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SelectedPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* BackgroundPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* AmountPanel;

public:
	UUMGPromoPackItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackItemWidget) { return 0; }
