#pragma once

#include "CoreMinimal.h"
#include "TomeLevelRewardAnimationDoneDelegate.h"
#include "ArchiveLevelProgressionViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "TomeLevelUnlockedAnimationDoneDelegate.h"
#include "TomeLevelSelectedDelegate.h"
#include "TomeLevelAnimationDoneDelegate.h"
#include "CoreArchiveLevelProgressionWidget.generated.h"

class UDBDTextBlock;
class UCoreStoryLevelsSelectorWidget;
class UOverlay;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveLevelProgressionWidget : public UCoreBaseUserWidget, public IArchiveLevelProgressionViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeLevelSelectedDelegate _levelSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeLevelAnimationDoneDelegate _levelAnimationDoneDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeLevelRewardAnimationDoneDelegate _levelRewardAnimationDoneDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeLevelUnlockedAnimationDoneDelegate _levelUnlockedAnimationDoneDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreStoryLevelsSelectorWidget* StoryLevelsSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* LevelNumberTF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* LevelCompletionTF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* SideContent;

private:
	UFUNCTION(BlueprintCallable)
	void OnTomeLevelUnlockedAnimation();

protected:
	UFUNCTION(BlueprintCallable)
	void OnStoryLevelSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreArchiveLevelProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveLevelProgressionWidget) { return 0; }
