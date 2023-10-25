#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "LevelUnockedAnimationDoneDelegate.h"
#include "ERemainingTimeFormat.h"
#include "EArchivesStoryLevelStatus.h"
#include "CoreStoryLevelButtonWidget.generated.h"

class UArchiveStoryLevelViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoryLevelButtonWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLevelUnockedAnimationDoneDelegate _levelUnlockedAnimationDoneDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _tooltipText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERemainingTimeFormat _lockedLevelTimeFormat;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisual(const UArchiveStoryLevelViewData* viewData, bool newlyUnlocked);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateStatusData(EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly);

	UFUNCTION(BlueprintCallable)
	void SetData(const UArchiveStoryLevelViewData* viewData, bool isSelectorReadOnly);

	UFUNCTION(BlueprintPure)
	int32 GetLevel() const;

public:
	UCoreStoryLevelButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoryLevelButtonWidget) { return 0; }
