#pragma once

#include "CoreMinimal.h"
#include "BackButtonClickedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "ChallengesMenuViewInterface.h"
#include "SettingsButtonClickedDelegate.h"
#include "ChallengesMenuTabSelectedDelegate.h"
#include "CoreChallengesMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;
class UCoreFooterInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreChallengesMenuWidget : public UCoreBaseUserWidget, public IChallengesMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* TabsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreFooterInputSwitcherWidget* SettingsInputSwitcher;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBackButtonClickedDelegate _backButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSettingsButtonClickedDelegate _settingsButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChallengesMenuTabSelectedDelegate _menuTabSelectedDelegate;

protected:
	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonClicked();

public:
	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

protected:
	UFUNCTION(BlueprintCallable)
	void OnBackButtonClicked();

public:
	UCoreChallengesMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreChallengesMenuWidget) { return 0; }
