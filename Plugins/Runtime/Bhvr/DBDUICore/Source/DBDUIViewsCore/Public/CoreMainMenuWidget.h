#pragma once

#include "CoreMinimal.h"
#include "MainMenuViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreMainMenuWidget.generated.h"

class UCoreMainMenuButtonWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMainMenuWidget : public UCoreBaseUserWidget, public IMainMenuViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlayButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* TutorialButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* ArchivesButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* StoreButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlayKillerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlaySurvivorButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlayCustomGameButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventKillerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* PlayLimitedTimeEventSurvivorButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMainMenuButtonWidget* EventButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* DailyRitualsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* FriendsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* SettingsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* NewsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* CreditsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* ExitButton;

protected:
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
	void OnFriendsButtonClicked(UCoreButtonWidget* target);

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

public:
	UCoreMainMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMainMenuWidget) { return 0; }
