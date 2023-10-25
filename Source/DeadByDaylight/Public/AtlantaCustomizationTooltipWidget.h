#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "AtlantaCustomizationTooltipWidget.generated.h"

class UImage;
class UUMGCustomizationTooltipContentWidget;
class UUMGCustomizationTooltipHeaderWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UAtlantaCustomizationTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SmokeImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationTooltipHeaderWidget* Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationTooltipContentWidget* Content;

public:
	UAtlantaCustomizationTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaCustomizationTooltipWidget) { return 0; }
