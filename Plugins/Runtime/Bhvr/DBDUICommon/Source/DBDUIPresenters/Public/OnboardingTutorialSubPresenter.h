#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "OnboardingTutorialSubPresenter.generated.h"

class IOnboardingTutorialViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UOnboardingTutorialSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IOnboardingTutorialViewInterface> _onboardingTutorialWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnSelectTutorial(const FString& stepId, const FString& tutorialId);

public:
	UOnboardingTutorialSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UOnboardingTutorialSubPresenter) { return 0; }
