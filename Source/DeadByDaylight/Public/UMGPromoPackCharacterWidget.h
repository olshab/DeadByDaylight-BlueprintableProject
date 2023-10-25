#pragma once

#include "CoreMinimal.h"
#include "UMGPromoPackItemWidget.h"
#include "UMGPromoPackCharacterWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPromoPackCharacterWidget : public UUMGPromoPackItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* OwnedPanel;

public:
	UUMGPromoPackCharacterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackCharacterWidget) { return 0; }
