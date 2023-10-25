#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "EGameType.h"
#include "OverlayMenuScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UOverlayMenuScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetGameType(EGameType gameType, bool isInCustomMatchManagerMode);

	UFUNCTION(BlueprintCallable)
	void OnSurvivorCameraSensitivityChanged(int32 value);

	UFUNCTION(BlueprintCallable)
	void OnSettingsOptionIntValueChanged(int32 id, int32 value);

	UFUNCTION(BlueprintCallable)
	void OnSettingsOptionCheckboxSelected(int32 id, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnSettingsOptionButtonClicked(int32 id);

	UFUNCTION(BlueprintCallable)
	void OnSelectTab(int32 tabIndex);

	UFUNCTION(BlueprintCallable)
	void OnResetDefaultSettings();

	UFUNCTION(BlueprintCallable)
	void OnResetDefaultKeybindings();

	UFUNCTION(BlueprintCallable)
	void OnRequestKeyBindingInput(int32 id, const FString& key);

	UFUNCTION(BlueprintCallable)
	void OnQuitButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnPrivacyPolicyButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnPlayerInfoClick(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnLanguageChange(int32 value);

	UFUNCTION(BlueprintCallable)
	void OnKillerCameraSensitivityChanged(int32 value);

	UFUNCTION(BlueprintCallable)
	void OnForumsButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnEULAButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnCustomerSupportButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnBackButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnAtlantaSettingButtonClick(int32 buttonID);

	UFUNCTION(BlueprintCallable)
	void OnAimAssistClick(bool value);

public:
	UOverlayMenuScreen();
};

FORCEINLINE uint32 GetTypeHash(const UOverlayMenuScreen) { return 0; }
