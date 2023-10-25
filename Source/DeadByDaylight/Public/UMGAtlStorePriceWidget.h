#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlStorePriceWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlStorePriceWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PriceText;

public:
	UUMGAtlStorePriceWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlStorePriceWidget) { return 0; }
