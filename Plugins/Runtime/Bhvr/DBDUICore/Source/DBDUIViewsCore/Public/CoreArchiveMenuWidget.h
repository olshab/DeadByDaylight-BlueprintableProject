#pragma once

#include "CoreMinimal.h"
#include "ArchiveSlotSelectionSelectedDelegate.h"
#include "ArchiveMenuTabSelectedDelegate.h"
#include "ArchiveBackActionDelegate.h"
#include "ArchiveMenuViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "ArchiveChallengeReminderClickedDelegate.h"
#include "ArchiveInfoClicked.h"
#include "ArchiveSlotSelectorClosed.h"
#include "EPlayerRole.h"
#include "EArchiveMenuState.h"
#include "CoreArchiveMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreArchiveSlotSelectorWidget;
class UCoreInputSwitcherWidget;
class UCoreArchiveChallengeReminderSlotWidget;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveMenuWidget : public UCoreBaseUserWidget, public IArchiveMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* ArchiveMenuTabs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreArchiveChallengeReminderSlotWidget* SurvivorChallengeSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreArchiveChallengeReminderSlotWidget* KillerChallengeSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreArchiveSlotSelectorWidget* SlotSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreButtonWidget* InfoButton;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveBackActionDelegate _backActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveInfoClicked _infoClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveSlotSelectorClosed _slotSelectorClosedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveMenuTabSelectedDelegate MenuTabSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveChallengeReminderClickedDelegate _challengeReminderClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveSlotSelectionSelectedDelegate _slotSelectionSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _riftRemainingTimeText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetScrollData(const FText& vignetteListScrollPromptText, const FText& journalEntryScrollPromptText);

protected:
	UFUNCTION(BlueprintCallable)
	void OnSlotSelectionCancelled();

	UFUNCTION(BlueprintCallable)
	void OnSlotSelected(EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnInfoButtonClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnChallengeReminderClick(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	FText GetTimeRemainingLabelFromMenuState(EArchiveMenuState menuState);

public:
	UCoreArchiveMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveMenuWidget) { return 0; }
