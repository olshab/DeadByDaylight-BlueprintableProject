#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnSaveGamePopupComplete.h"
#include "OnScreenTouched.h"
#include "UMGSplashScreen.generated.h"

class UUMGCharacterSlideShowWidget;
class UTextBlock;
class UButton;
class UUMGDownloadProgressionWidget;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UUMGSplashScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSaveGamePopupComplete OnSaveGamePopupCompleteEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnScreenTouched OnScreenTouched;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SavePopup;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* GameVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* LoadingState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* PressKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UButton* TapButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* SaveGameTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* SaveGameDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGDownloadProgressionWidget* DownloadProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGCharacterSlideShowWidget* CharacterSlideShow;

private:
	UFUNCTION(BlueprintCallable)
	void OnTapButtonClicked();

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void OnSaveGamePopupComplete() const;

public:
	UUMGSplashScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSplashScreen) { return 0; }
