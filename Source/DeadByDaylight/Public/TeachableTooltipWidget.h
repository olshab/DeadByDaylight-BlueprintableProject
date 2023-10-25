#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "TeachableTooltipWidget.generated.h"

class UTextBlock;
class UUMGHtmlRichText;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UTeachableTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* SubTitleLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HeaderSmoke;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* EffectText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* AvailabilityText;

public:
	UTeachableTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTeachableTooltipWidget) { return 0; }
