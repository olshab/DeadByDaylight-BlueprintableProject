#pragma once

#include "CoreMinimal.h"
#include "UMGBaseLandingPageStorefrontWidget.h"
#include "UMGAtlLandingPageStorefrontWidget.generated.h"

class UUMGBaseButtonWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlLandingPageStorefrontWidget : public UUMGBaseLandingPageStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* AtlantaRedeemCodeBtn;

protected:
	UFUNCTION(BlueprintCallable)
	void OnPromoCodeButtonPressed();

public:
	UUMGAtlLandingPageStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlLandingPageStorefrontWidget) { return 0; }
