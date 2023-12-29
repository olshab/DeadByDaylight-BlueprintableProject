#pragma once

#include "CoreMinimal.h"
#include "VignetteEntrySelected.h"
#include "ArchiveJournalViewInterface.h"
#include "CoreTabContentWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "VignetteVoiceOverPlayed.h"
#include "VignetteSelected.h"
#include "VignetteCinematicPlayed.h"
#include "VignetteVoiceOverAutoplay.h"
#include "VignetteShowImageViewer.h"
#include "CoreArchiveJournalWidget.generated.h"

class UTexture2D;
class UCoreArchiveVignetteButtonContainerWidget;
class UCoreArchiveVignetteEntryContainerWidget;
class UCoreInputSwitcherWidget;
class UCoreArchiveVignetteCinematicContainerWidget;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveJournalWidget : public UCoreTabContentWidget, public IArchiveJournalViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreArchiveVignetteButtonContainerWidget* VignetteButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreArchiveVignetteEntryContainerWidget* VignetteEntryContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreArchiveVignetteCinematicContainerWidget* VignetteCinematicsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* LeftArrowInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* RightArrowInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AreInputsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> DebugRewardImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 RewardImageMaxDescriptionLength;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVignetteSelected _vignetteSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVignetteEntrySelected _vignetteEntrySelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVignetteCinematicPlayed _vignetteCinematicPlayedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVignetteVoiceOverPlayed _vignetteVoiceOverPlayedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVignetteVoiceOverAutoplay _vignetteVoiceOverAutoplayDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVignetteShowImageViewer _vignetteShowImageViewerDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void ShowImageViewer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverText(const FText& playVoiceOverText, const FText& stopVoiceOverText, const FText& autoplayVoiceOverText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverButtonsVisibility(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVignetteText(const FText& titleText, const FText& subtitleText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTopFogOffset(bool hasTitle, bool hasDescription);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEntryText(const FText& titleText, const FText& descriptionText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEntryImage(const FText& titleText, const FText& descriptionText, const TSoftObjectPtr<UTexture2D>& rewardImage, float textureOffset);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBottomFogOffset(bool hasAudio);

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverPlay();

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverAutoPlay(bool autoplay);

	UFUNCTION(BlueprintCallable)
	void OnVignetteEntrySelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnVignetteCinematicSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnVignetteButtonSelected(UCoreSelectableButtonWidget* selectedButton);

private:
	UFUNCTION(BlueprintCallable)
	void OnRightArrowTriggered();

	UFUNCTION(BlueprintCallable)
	void OnRewardImageLoaded(TSoftObjectPtr<UTexture2D> loadedTexture, bool success, FText titleText, FText descriptionText, float textureOffset);

	UFUNCTION(BlueprintCallable)
	void OnLeftArrowTriggered();

	UFUNCTION(BlueprintCallable)
	void OnJournalEntriesUnlocked();

	UFUNCTION(BlueprintCallable)
	void OnFirstJournalEntryUnlocked();

	UFUNCTION(BlueprintCallable)
	void InitializeArrow(UCoreInputSwitcherWidget* arrowWidget, bool active);

public:
	UCoreArchiveJournalWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveJournalWidget) { return 0; }
