#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCustomizationTooltipContentWidget.generated.h"

class UUMGHtmlRichText;
class UUMGCustomizationInfoWidget;
class UUMGCustomizationItemPriceWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationTooltipContentWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationInfoWidget* OutfitInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationInfoWidget* RoleInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationInfoWidget* ReplacementInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationItemPriceWidget* AuricCellsPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCustomizationItemPriceWidget* IridescentShardsPrice;

public:
	UUMGCustomizationTooltipContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationTooltipContentWidget) { return 0; }
