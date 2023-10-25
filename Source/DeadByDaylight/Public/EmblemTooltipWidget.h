#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "EmblemTooltipWidget.generated.h"

class UUMGTallyEmblemProgressionWidget;
class UTextBlock;
class UImage;
class UVerticalBox;
class UUMGTallyEmblemProgressBar;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UEmblemTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HeaderBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* SubTitleLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HeaderSmoke;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* DataContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyEmblemProgressBar* TallyEmblemProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGTallyEmblemProgressionWidget> ProgressionDataWidgetClass;

public:
	UEmblemTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEmblemTooltipWidget) { return 0; }
