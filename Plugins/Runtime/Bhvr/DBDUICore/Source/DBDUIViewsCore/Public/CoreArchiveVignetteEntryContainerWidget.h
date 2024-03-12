#pragma once

#include "CoreMinimal.h"
#include "CoreTabContainerWidget.h"
#include "EEasingType.h"
#include "CoreArchiveVignetteEntryContainerWidget.generated.h"

class UProgressBar;
class UUITweenInstance;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteEntryContainerWidget : public UCoreTabContainerWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UProgressBar* JournalProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType AnimationEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressAnimationDuration;

public:
	UFUNCTION(BlueprintCallable)
	void OnUnlockProgress(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void OnUnlockComplete(UUITweenInstance* tween);

public:
	UCoreArchiveVignetteEntryContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteEntryContainerWidget) { return 0; }
