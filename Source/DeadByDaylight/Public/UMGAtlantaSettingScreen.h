#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "EOverlayTabs.h"
#include "Components/SlateWrapperTypes.h"
#include "UMGAtlantaSettingScreen.generated.h"

class UHorizontalBox;
class UWidgetSwitcher;
class UUMGSettingMenuButton;
class UTexture2D;
class UUMGSettingContextWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGAtlantaSettingScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* SettingContextSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* SettingTabBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* AlwaysDisplayButtonBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGSettingMenuButton> _settingTabButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGSettingMenuButton> _settingAlwaysDisplayButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> _buttonBoxDividerAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Transient)
	TMap<EOverlayTabs, TSoftClassPtr<UUMGSettingContextWidget>> _overlayContextWidgetMap;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<EOverlayTabs, UUMGSettingContextWidget*> _contextWidgetMap;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowCreditsOrConsentsPopup(const FString& title, const FString& content);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRightTopTextInfo(const FText& title, const FString& content, ESlateVisibility textVisibility);

	UFUNCTION(BlueprintCallable)
	void HandleSurvivorCameraSensitivityChanged(int32 value);

	UFUNCTION(BlueprintCallable)
	void HandleSettingTabClick(int32 tabIndex);

	UFUNCTION(BlueprintCallable)
	void HandleLeaveButtonClick();

	UFUNCTION(BlueprintCallable)
	void HandleLanguageButtonClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleKillerCameraSensitivityChanged(int32 value);

	UFUNCTION(BlueprintCallable)
	void HandleInvertYToggleClick(bool toggleValue);

	UFUNCTION(BlueprintCallable)
	void HandleInteractionButtonToggleClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleHandSideToggleClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleContextButtonClickEvent(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleAlwaysDisplayButtonClick(int32 tabIndex);

	UFUNCTION(BlueprintCallable)
	void HandleAimAssistToggleClick(bool toggleValue);

public:
	UUMGAtlantaSettingScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaSettingScreen) { return 0; }
