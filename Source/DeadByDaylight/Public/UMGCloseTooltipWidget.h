#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCloseTooltipWidget.generated.h"

class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCloseTooltipWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* FullScreenButton;

private:
	UFUNCTION(BlueprintCallable)
	void HandleCloseTooltipButton();

public:
	UUMGCloseTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCloseTooltipWidget) { return 0; }
