#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "CompendiumButtonData.h"
#include "ArchiveCompendiumTooltipWidget.generated.h"

class UCoreStoryLevelsSelectorWidget;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UArchiveCompendiumTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TomeTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoryLevelsSelectorWidget* StoryLevelsSelector;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FCompendiumButtonData& tooltipViewData);

	UFUNCTION(BlueprintCallable)
	void Reset();

public:
	UArchiveCompendiumTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveCompendiumTooltipWidget) { return 0; }
