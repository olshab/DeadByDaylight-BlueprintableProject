#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnboardingTutorialViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "PendingStepData.h"
#include "TutorialSelectedDelegate.h"
#include "CoreOnboardingTutorialPanelWidget.generated.h"

class UUserWidget;
class UCoreOnboardingButtonHolderWidget;
class UOverlay;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget, public IOnboardingTutorialViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UOverlay*> OnboardingButtonHolderContainers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTutorialSelectedDelegate TutorialSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUserWidget* LoadingWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _arrowHighlightRenderOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _arrowUnhighlightRenderOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreOnboardingButtonHolderWidget> _oneTutorialButtonHolderWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreOnboardingButtonHolderWidget> _twoTutorialButtonHolderWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCoreOnboardingButtonHolderWidget*> _onboardingButtonHolderWidgets;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FPendingStepData> _pendingData;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TryBroadcastSelectedTutorial(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTutorialSeparators(const FString& completedStepId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTutorialDescription(const FText& description, bool isWarning);

private:
	UFUNCTION(BlueprintCallable)
	void NextPendingButtonUpdated();

	UFUNCTION(BlueprintCallable)
	void CheckNextPendingButtonUpdate();

public:
	UCoreOnboardingTutorialPanelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingTutorialPanelWidget) { return 0; }
