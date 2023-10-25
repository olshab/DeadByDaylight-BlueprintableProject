#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBaseCountdownWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseCountdownWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TimerTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _timerThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _timerColorBelowThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _timerColorBeyondThreshold;

public:
	UUMGBaseCountdownWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseCountdownWidget) { return 0; }
