#pragma once

#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "EndGameCollapseBarViewInterface.h"
#include "CoreEndGameCollapseBarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget, public IEndGameCollapseBarViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _progressBarInterpSpeed;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateBarProgression(const float progress);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayToZeroAnimation();

public:
	UCoreEndGameCollapseBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreEndGameCollapseBarWidget) { return 0; }
