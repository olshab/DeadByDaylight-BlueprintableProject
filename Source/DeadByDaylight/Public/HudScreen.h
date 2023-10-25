#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "InteractionProgressViewData.h"
#include "UObject/ScriptInterface.h"
#include "ItemBundleViewData.h"
#include "PowerBundleViewData.h"
#include "PlayerStatusViewData.h"
#include "HudScreen.generated.h"

class IPlayerStatusViewInterface;
class UCoreHudRootWidget;
class ATutorialsUtilities;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UHudScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreHudRootWidget* _rootWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ATutorialsUtilities* _tutorialsUtilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusInterfaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FInteractionProgressViewData _interactionProgressViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FItemBundleViewData _itemBundleViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPowerBundleViewData _powerBundleViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FPlayerStatusViewData> _playerStatusViewData;

private:
	UFUNCTION(BlueprintCallable)
	void OnTutorialHudFadeOutTriggered();

	UFUNCTION(BlueprintCallable)
	void OnTutorialHudFadeInTriggered();

	UFUNCTION(BlueprintCallable)
	void OnHUDWidgetFadeOutCompleted();

	UFUNCTION(BlueprintCallable)
	void OnHUDWidgetDelayCompleted() const;

	UFUNCTION(BlueprintCallable)
	void OnHideStartSequenceCompleted();

	UFUNCTION(BlueprintCallable)
	void OnHemorrhageAnimationComplete();

public:
	UHudScreen();
};

FORCEINLINE uint32 GetTypeHash(const UHudScreen) { return 0; }
