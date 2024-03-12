#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreArchiveSlotSelectorWidget.generated.h"

class UArchiveNodeTooltipWidget;
class UCoreKeyListenerInputPromptWidget;
class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveSlotSelectorWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UArchiveNodeTooltipWidget* NodeTooltip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* SurvivorSlotPromptWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* BothSlotPromptWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* KillerSlotPromptWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* CancelPromptWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorSelection();

	UFUNCTION(BlueprintCallable)
	void OnKillerSelection();

	UFUNCTION(BlueprintCallable)
	void OnCancelSelection();

	UFUNCTION(BlueprintCallable)
	void OnBothSelection();

public:
	UCoreArchiveSlotSelectorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveSlotSelectorWidget) { return 0; }
