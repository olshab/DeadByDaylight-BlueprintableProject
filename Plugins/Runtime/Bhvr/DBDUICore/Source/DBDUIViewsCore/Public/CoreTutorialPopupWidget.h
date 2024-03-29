#pragma once

#include "CoreMinimal.h"
#include "TutorialPopupViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "NotifTutoConfirmButtonClickDelegate.h"
#include "CoreTutorialPopupWidget.generated.h"

class UAkAudioEvent;
class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialPopupWidget : public UCoreBaseHudWidget, public ITutorialPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ProgressionInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ClosePopupSfx;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FNotifTutoConfirmButtonClickDelegate _notifTutoConfirmButtonClickDelegate;

public:
	UCoreTutorialPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTutorialPopupWidget) { return 0; }
