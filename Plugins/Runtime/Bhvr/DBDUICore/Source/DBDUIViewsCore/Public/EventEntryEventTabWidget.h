#pragma once

#include "CoreMinimal.h"
#include "EventInfoViewInterface.h"
#include "CoreTabContentWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventInfoTabArchivesButtonClickedDelegate.h"
#include "EventEntryEventTabWidget.generated.h"

class UEventTabViewData;
class UDBDImage;
class UCoreInputSwitcherWidget;
class UDBDScrollBox;
class UDBDRichTextBlock;
class UEventObjectiveTrackerWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEventEntryEventTabWidget : public UCoreTabContentWidget, public IEventInfoViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UEventTabViewData* _viewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* ImageContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* MessageText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* AdditionalInformationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UEventObjectiveTrackerWidget* EventObjectiveTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ArchivesButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _scrollLabelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FEventInfoTabArchivesButtonClickedDelegate _onArchivesButtonClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _disableArchivesButton;

protected:
	UFUNCTION(BlueprintCallable)
	void OnArchivesButtonClicked();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnableInputs();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisableInputs();

public:
	UEventEntryEventTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryEventTabWidget) { return 0; }
