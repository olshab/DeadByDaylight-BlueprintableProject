#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "SpecialEventUIInfo.h"
#include "SplashScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API USplashScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void UpdateLoadingProgression(const FString& loadingProgression) const;

	UFUNCTION(BlueprintCallable)
	void ShowSpecialEventVisual(const FSpecialEventUIInfo& eventInfo) const;

	UFUNCTION(BlueprintCallable)
	void ShowSaveGamePopup() const;

	UFUNCTION(BlueprintCallable)
	void ShowPressKeyState() const;

	UFUNCTION(BlueprintCallable)
	void ShowLoadingState() const;

	UFUNCTION(BlueprintCallable)
	void SetVersionText(const FString& versionText) const;

protected:
	UFUNCTION(BlueprintCallable)
	void OnSaveGamePopupComplete();

public:
	UFUNCTION(BlueprintCallable)
	void HidePressKeyState() const;

public:
	USplashScreen();
};

FORCEINLINE uint32 GetTypeHash(const USplashScreen) { return 0; }
