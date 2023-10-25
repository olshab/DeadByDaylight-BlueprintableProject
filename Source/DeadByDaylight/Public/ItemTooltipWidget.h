#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "ItemTooltipWidget.generated.h"

class UTextBlock;
class UImage;
class UUMGHtmlRichText;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UItemTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RarityLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* WarningText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HeaderSmoke;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HeaderBackground;

public:
	UItemTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UItemTooltipWidget) { return 0; }
