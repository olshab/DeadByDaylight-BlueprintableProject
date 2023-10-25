#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGTallyEmblemProgressionWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGTallyEmblemProgressionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PositiveIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* NegativeIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PercentText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor WarningPercentColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor WarningDescriptionColor;

public:
	UUMGTallyEmblemProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemProgressionWidget) { return 0; }
