#pragma once

#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingSettingsContextWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingSettingsContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MainVolumeOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MainVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MenuVolumeOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MenuVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLoggedIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsEnableUserCenterWithLoggedOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLeaveTutorialButtonVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAutoDeclineFriendRequestOn;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowLinkAccountRow(bool isShow);

	UFUNCTION(BlueprintCallable)
	void HandleUserCenterButtonClick();

	UFUNCTION(BlueprintCallable)
	void HandleMenuVolumeToggleClick(bool toggleValue);

	UFUNCTION(BlueprintCallable)
	void HandleMenuVolumeChanged(float sliderValue);

	UFUNCTION(BlueprintCallable)
	void HandleMainVolumeToggleClick(bool toggleValue);

	UFUNCTION(BlueprintCallable)
	void HandleMainVolumeChanged(float sliderValue);

	UFUNCTION(BlueprintCallable)
	void HandleLogOutButtonClick();

	UFUNCTION(BlueprintCallable)
	void HandleLogInButtonClick();

	UFUNCTION(BlueprintCallable)
	void HandleLeaveTutorialButtonClick();

	UFUNCTION(BlueprintCallable)
	void HandleAutoDeclineFriendRequestToggleClick(bool toggleValue);

public:
	UUMGSettingSettingsContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingSettingsContextWidget) { return 0; }
