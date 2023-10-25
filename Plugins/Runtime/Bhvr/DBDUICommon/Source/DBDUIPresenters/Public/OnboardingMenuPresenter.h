#pragma once

#include "CoreMinimal.h"
#include "EOnboardingMenuState.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "OnboardingMenuPresenter.generated.h"

class UUserWidget;
class UOnboardingTutorialSubPresenter;
class UGameManualSubPresenter;
class USubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UOnboardingMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> OnboardingMenuWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UOnboardingTutorialSubPresenter* _onboardingTutorialSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGameManualSubPresenter* _gameManualSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION(BlueprintCallable)
	void OnSetUIEnabled(bool enabled);

	UFUNCTION(BlueprintCallable)
	void OnSettingsAction();

	UFUNCTION(BlueprintCallable)
	void OnQuitGameAction();

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelectedAgain(EOnboardingMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(EOnboardingMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void OnFirstOnboardingStepsDone(bool isFirstStepsDone);

	UFUNCTION(BlueprintCallable)
	void OnChangeAccountAction();

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

public:
	UOnboardingMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UOnboardingMenuPresenter) { return 0; }
