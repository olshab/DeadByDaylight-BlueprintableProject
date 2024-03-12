#pragma once

#include "CoreMinimal.h"
#include "EThemeColorId.h"
#include "StartSequenceFadeOutCompleted.h"
#include "EEasingType.h"
#include "StartSequenceViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "UObject/NoExportTypes.h"
#include "CoreStartSequenceWidget.generated.h"

class UDBDTextBlock;
class UImage;
class UUITweenInstance;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStartSequenceWidget : public UCoreBaseHudWidget, public IStartSequenceViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType FadeInEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType FadeOutEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EThemeColorId, FLinearColor> BorderColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DefaultColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ThemeNameTextfield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* SeparatorImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* MapNameTextfield;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStartSequenceFadeOutCompleted StartSequenceFadeOutDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void OnHideStartSequenceComplete(UUITweenInstance* tween);

public:
	UCoreStartSequenceWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStartSequenceWidget) { return 0; }
