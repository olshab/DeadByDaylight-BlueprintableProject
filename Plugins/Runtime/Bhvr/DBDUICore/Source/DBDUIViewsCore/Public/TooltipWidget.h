#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Layout/Margin.h"
#include "TooltipWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _tooltipMargin;

public:
	UFUNCTION(BlueprintCallable)
	void OnShowTooltip();

	UFUNCTION(BlueprintCallable)
	void OnHideTooltip();

public:
	UTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTooltipWidget) { return 0; }
