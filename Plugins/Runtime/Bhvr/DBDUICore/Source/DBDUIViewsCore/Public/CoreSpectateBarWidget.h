#pragma once

#include "CoreMinimal.h"
#include "SpectateLeftArrowTriggeredDelegate.h"
#include "SpectateBarViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "SpectateLeaveTriggeredDelegate.h"
#include "SpectateRightArrowTriggeredelegate.h"
#include "CoreSpectateBarWidget.generated.h"

class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSpectateBarWidget : public UCoreBaseHudWidget, public ISpectateBarViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* LeaveInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* LeftArrowInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* RightArrowInputSwitcher;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FSpectateLeaveTriggeredDelegate _leaveTriggeredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FSpectateLeftArrowTriggeredDelegate _leftArrowTriggeredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FSpectateRightArrowTriggeredelegate _rightArrowTriggeredDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void OnRightArrowTriggered();

	UFUNCTION(BlueprintCallable)
	void OnLeftArrowTriggered();

	UFUNCTION(BlueprintCallable)
	void OnLeaveTriggered();

public:
	UCoreSpectateBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSpectateBarWidget) { return 0; }
