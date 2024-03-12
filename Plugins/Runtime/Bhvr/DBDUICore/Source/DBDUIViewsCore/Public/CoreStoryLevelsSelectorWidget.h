#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "EArchivesStoryLevelStatus.h"
#include "CoreStoryLevelsSelectorWidget.generated.h"

class UCoreInputSwitcherWidget;
class UCoreStoryLevelButtonWidget;
class UGridPanel;
class UArchiveStoryLevelViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoryLevelsSelectorWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsReadOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoryLevelButtonWidget> CoreStoryLevelButtonWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* LevelButtonsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PreviousLevelInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* NextLevelInputSwitcher;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UArchiveStoryLevelViewData*> _levelButtonsData;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool playAnimation);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateLevelStatus(const int32 level, const EArchivesStoryLevelStatus status);

protected:
	UFUNCTION(BlueprintCallable)
	void SetUpInteractionMode();

public:
	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool enabled);

	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<UArchiveStoryLevelViewData*>& levelbuttonsData);

private:
	UFUNCTION(BlueprintCallable)
	void OnStoryLevelUnlockedAnimation();

public:
	UFUNCTION(BlueprintPure)
	UCoreStoryLevelButtonWidget* GetStoryLevelButton(int32 level) const;

protected:
	UFUNCTION(BlueprintCallable)
	void AdaptButtonsPoolToData(int32 dataNumber);

public:
	UCoreStoryLevelsSelectorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoryLevelsSelectorWidget) { return 0; }
