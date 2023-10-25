#pragma once

#include "CoreMinimal.h"
#include "OnTutorialButtonClickedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "OnTutorialButtonSetDataAnimationCompleteDelegate.h"
#include "CoreOnboardingButtonHolderWidget.generated.h"

class UCoreOnboardingTutorialButtonWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreOnboardingButtonHolderWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnTutorialButtonClickedDelegate OnTutorialButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnTutorialButtonSetDataAnimationCompleteDelegate OnSetDataAnimationCompleteDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCoreOnboardingTutorialButtonWidget*> TutorialButtons;

protected:
	UFUNCTION(BlueprintCallable)
	void OnClickedTutorialButton(UCoreButtonWidget* ClickedTutorialButton);

	UFUNCTION(BlueprintCallable)
	void OnButtonSetDataAnimationCompleteDelegate();

public:
	UFUNCTION(BlueprintCallable)
	FString GetStepId();

public:
	UCoreOnboardingButtonHolderWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingButtonHolderWidget) { return 0; }
