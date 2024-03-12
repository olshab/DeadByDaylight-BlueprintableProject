#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EGameType.h"
#include "EMenuOpened.h"
#include "EDBDCameraViewType.h"
#include "NewsContentDetails.h"
#include "MainMenuPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UMainMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> MainMenuWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void RequestDailyRitualsContext() const;

	UFUNCTION(BlueprintCallable)
	void OnTutorialButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnStoreButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnPlaySurvivorButtonClicked(EGameType gameType);

	UFUNCTION(BlueprintCallable)
	void OnPlayLimitedTimeEventSurvivorButtonClicked(EGameType gameType, const FName& eventId);

	UFUNCTION(BlueprintCallable)
	void OnPlayLimitedTimeEventKillerButtonClicked(EGameType gameType, const FName& eventId);

	UFUNCTION(BlueprintCallable)
	void OnPlayKillerButtonClicked(EGameType gameType);

	UFUNCTION(BlueprintCallable)
	void OnPlayCustomButtonClicked(EGameType gameType);

	UFUNCTION(BlueprintCallable)
	void OnNewsContentReceived(bool success, const TArray<FNewsContentDetails>& receivedNewsData, const int32 newsHighestWeight);

	UFUNCTION(BlueprintCallable)
	void OnNewsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnMarketingInvitationButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnMainMenuFadeCompleted(EDBDCameraViewType view);

	UFUNCTION(BlueprintCallable)
	void OnLTESubMenuOpeningChanged(EMenuOpened menuOpened);

	UFUNCTION(BlueprintCallable)
	void OnFriendsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnExitButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnEventButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCreditsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCreatePartyCompleted(bool success, const int32 idToTransitionTo);

	UFUNCTION(BlueprintCallable)
	void OnChangeAccountClicked();

	UFUNCTION(BlueprintCallable)
	void OnArchivesButtonClicked();

public:
	UMainMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UMainMenuPresenter) { return 0; }
