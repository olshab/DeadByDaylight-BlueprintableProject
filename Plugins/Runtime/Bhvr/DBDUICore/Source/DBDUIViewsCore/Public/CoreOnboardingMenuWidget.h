#pragma once

#include "CoreMinimal.h"
#include "ChangeAccountActionDelegate.h"
#include "QuitGameActionDelegate.h"
#include "OnboardingMenuViewInterface.h"
#include "MenuTabSelectedAgainDelegate.h"
#include "CoreBaseUserWidget.h"
#include "SettingsActionDelegate.h"
#include "BackActionDelegate.h"
#include "OnboardingMenuTabSelectedDelegate.h"
#include "CoreOnboardingMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreOnboardingMenuTitleWidget;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;
class UCoreFooterInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingMenuWidget : public UCoreBaseUserWidget, public IOnboardingMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* OnboardingMenuTabs;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreOnboardingMenuTitleWidget* MenuTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreFooterInputSwitcherWidget* SettingsInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreFooterInputSwitcherWidget* QuitGameInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* ChangeAccountInputSwitcher;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FBackActionDelegate BackActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSettingsActionDelegate SettingsActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FQuitGameActionDelegate QuitGameActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FChangeAccountActionDelegate ChangeAccountActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnboardingMenuTabSelectedDelegate MenuTabSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FMenuTabSelectedAgainDelegate MenuTabSelectedAgainDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void SetTitleText(const bool isInTutorial);

	UFUNCTION(BlueprintCallable)
	void SetBackButton(const bool isFTUE);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreOnboardingMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingMenuWidget) { return 0; }
