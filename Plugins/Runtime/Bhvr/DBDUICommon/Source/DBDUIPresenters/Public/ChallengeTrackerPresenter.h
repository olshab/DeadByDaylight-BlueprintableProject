#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "ChallengeTrackerPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UChallengeTrackerPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ChallengeTrackerWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	float ReadingTimeDelaySec;

private:
	UFUNCTION(BlueprintCallable)
	void OnWidgetProgressingDone();

	UFUNCTION(BlueprintCallable)
	void OnWidgetOpeningDone();

	UFUNCTION(BlueprintCallable)
	void OnWidgetClosingDone();

	UFUNCTION(BlueprintCallable)
	void OnReadingTimeDelayDone();

	UFUNCTION(BlueprintCallable)
	void OnQuestEventRepetitionValueChanged(int32 value, const FString& questEventIdTracked);

	UFUNCTION(BlueprintCallable)
	void BindToQuestRepetitionEvents();

public:
	UChallengeTrackerPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengeTrackerPresenter) { return 0; }
