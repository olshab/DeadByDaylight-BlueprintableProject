#pragma once

#include "CoreMinimal.h"
#include "EMainMenuButtonType.h"
#include "MainMenuViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "OnChangeAccountButtonClicked.h"
#include "CoreMainMenuWidget.generated.h"

class UCoreMainMenuButtonWidget;
class UCoreFooterButtonWidget;
class UCoreInputSwitcherWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMainMenuWidget : public UCoreBaseUserWidget, public IMainMenuViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* TutorialButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* ArchivesButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* StoreButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* ChallengesButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayKillerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlaySurvivorButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayCustomGameButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventKillerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventSurvivorButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMainMenuButtonWidget* EventButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* DailyRitualsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* FriendsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* SettingsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* NewsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* CreditsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreFooterButtonWidget* MarketingInvitationButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ExitButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ChangeAccountInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> _eventNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChallengesButtonAvailable;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnChangeAccountButtonClicked OnChangeAccountButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreMainMenuButtonWidget*> PlayKillerButtons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreMainMenuButtonWidget*> PlaySurvivorButtons;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowUiTakeover(bool show);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowPlaySubMenu(bool open);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowLimitedTimeEventSubMenu(bool open);

private:
	UFUNCTION(BlueprintCallable)
	void OnTutorialButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnStoreButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlaySurvivorButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlayLimitedTimeEventSurvivorButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlayLimitedTimeEventKillerButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlayLimitedTimeEventButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlayKillerButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlayCustomButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnPlayButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnNewsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnMarketingInvitationButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnFriendsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnExitButtonTriggered();

	UFUNCTION(BlueprintCallable)
	void OnExitButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnEventButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnCreditsButtonClicked(UCoreButtonWidget* target);

	UFUNCTION(BlueprintCallable)
	void OnArchivesButtonClicked(UCoreButtonWidget* target);

protected:
	UFUNCTION(BlueprintCallable)
	bool HasActiveLTE();

private:
	UFUNCTION(BlueprintCallable)
	UCoreBaseUserWidget* GetButton(EMainMenuButtonType button);

public:
	UCoreMainMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMainMenuWidget) { return 0; }
