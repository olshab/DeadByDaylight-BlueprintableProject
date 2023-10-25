#pragma once

#include "CoreMinimal.h"
#include "WidgetOpeningDone.h"
#include "ChallengeTrackerViewInterface.h"
#include "WidgetClosingDone.h"
#include "ProgressAnimationDone.h"
#include "CoreBaseHudWidget.h"
#include "CoreChallengeTrackerWidget.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class UCoreChallengeTrackerWidget : public UCoreBaseHudWidget, public IChallengeTrackerViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FWidgetOpeningDone _onWidgetOpeningDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FWidgetClosingDone _onWidgetClosingDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FProgressAnimationDone _onWidgetProgressionDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OpenSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* CloseSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ProgressionSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* CompleteSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProgressionAudioRTPC;

public:
	UCoreChallengeTrackerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreChallengeTrackerWidget) { return 0; }
