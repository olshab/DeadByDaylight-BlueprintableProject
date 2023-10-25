#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "NavigationScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UNavigationScreen : public UScreenBase
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnToggleChatVisibility();

	UFUNCTION(BlueprintCallable)
	void OnStartButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnSettingsClick();

	UFUNCTION(BlueprintCallable)
	void OnSendChatMsgButtonClick(const FString& message);

	UFUNCTION(BlueprintCallable)
	void OnReadyButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnPlayerOptionSelected(const FString& krakenId, const FString& playerId, uint8 option);

	UFUNCTION(BlueprintCallable)
	void OnPlayerInfoClick(int32 playerId);

public:
	UFUNCTION(BlueprintCallable)
	void OnPerkPreviewPerkSlotClicked(int32 slotIndex);

protected:
	UFUNCTION(BlueprintCallable)
	void OnMatchManagementButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnMatchMakingBanTimeout();

	UFUNCTION(BlueprintCallable)
	void OnInviteFriendClick();

	UFUNCTION(BlueprintCallable)
	void OnFadeOutEnded();

	UFUNCTION(BlueprintCallable)
	void OnDailyRitualsClick();

	UFUNCTION(BlueprintCallable)
	void OnChatInputMouseOver(bool isMouseOver);

	UFUNCTION(BlueprintCallable)
	void OnCharacterSwapArrowClick(bool isNext);

	UFUNCTION(BlueprintCallable)
	void OnCancelButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnBankClick(int32 currencyTypeInt);

	UFUNCTION(BlueprintCallable)
	void OnAddPlayerClick(int32 buttonId);

public:
	UNavigationScreen();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationScreen) { return 0; }
