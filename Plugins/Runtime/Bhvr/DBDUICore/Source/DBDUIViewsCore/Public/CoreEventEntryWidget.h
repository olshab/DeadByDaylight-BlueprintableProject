#pragma once

#include "CoreMinimal.h"
#include "EventEntryViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "EventEntryTabSelectedDelegate.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventEntryBackActionDelegate.h"
#include "CoreEventEntryWidget.generated.h"

class UEventEntryViewData;
class UCoreTabContainerWidget;
class UDataTable;
class UDBDImage;
class UCoreInputSwitcherWidget;
class UMilestoneTrackerWidget;
class UDBDTextBlock;
class UCoreKeyListenerInputPromptWidget;
class URichTextBlock;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEventEntryWidget : public UCoreBaseUserWidget, public IEventEntryViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UEventEntryViewData* _viewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UDataTable* _eventSkinDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* TitleBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* TitleImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* EventDateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreTabContainerWidget* TabsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMilestoneTrackerWidget* MilestoneTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreKeyListenerInputPromptWidget* ScrollPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FEventEntryTabSelectedDelegate _eventEntryTabSelectedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEventEntryBackActionDelegate _backActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* RegressionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URichTextBlock* TitleText;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetUiTakeoverActive(bool isActive);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTabsVisuals();

	UFUNCTION(BlueprintCallable)
	void OnTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnShow();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLeave();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEnter();

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

public:
	UCoreEventEntryWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreEventEntryWidget) { return 0; }
