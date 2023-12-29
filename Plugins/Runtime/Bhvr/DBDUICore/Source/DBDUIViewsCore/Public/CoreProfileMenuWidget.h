#pragma once

#include "CoreMinimal.h"
#include "SettingsButtonClickedDelegate.h"
#include "MenuTabSelectedDelegate.h"
#include "ProfileMenuViewInterface.h"
#include "BackButtonClickedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "CoreProfileMenuWidget.generated.h"

class UCoreKeyListenerInputPromptWidget;
class UCoreTabContainerWidget;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreProfileMenuWidget : public UCoreBaseUserWidget, public IProfileMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* TabsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreKeyListenerInputPromptWidget* ScrollPrompt;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBackButtonClickedDelegate _backButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSettingsButtonClickedDelegate _settingsButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMenuTabSelectedDelegate _menuTabSelectedDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

protected:
	UFUNCTION(BlueprintCallable)
	void OnBackButtonClicked();

public:
	UCoreProfileMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreProfileMenuWidget) { return 0; }
