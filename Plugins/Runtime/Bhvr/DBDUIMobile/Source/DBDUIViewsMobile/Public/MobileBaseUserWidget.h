#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MobileBaseUserWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UMobileBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UWidget* HighlightWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _tutorialAnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _tutorialNumberOfLoops;

private:
	UFUNCTION(BlueprintCallable)
	void TutorialAnimationFinished();

protected:
	UFUNCTION(BlueprintCallable)
	void TryBroadcastOnHighlightWidgetClicked();

public:
	UFUNCTION(BlueprintCallable)
	void TriggerTutorialVisuals();

	UFUNCTION(BlueprintCallable)
	void PropagateOnHighlightWidgetClicked(const FName onBoardingID);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSynchronizeProperties();

	UFUNCTION(BlueprintCallable)
	bool IsInTutorialState();

	UFUNCTION(BlueprintCallable)
	void FinishTutorialVisuals();

public:
	UMobileBaseUserWidget();
};

FORCEINLINE uint32 GetTypeHash(const UMobileBaseUserWidget) { return 0; }
