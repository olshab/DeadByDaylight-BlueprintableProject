#pragma once

#include "CoreMinimal.h"
#include "CoreInputSwitcherWidget.h"
#include "CoreFooterInputSwitcherWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UCoreFooterInputSwitcherWidget : public UCoreInputSwitcherWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _iconTexture;

public:
	UFUNCTION(BlueprintCallable)
	void SetBetaFeatureOverlayVisible(bool isVisible);

public:
	UCoreFooterInputSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFooterInputSwitcherWidget) { return 0; }
