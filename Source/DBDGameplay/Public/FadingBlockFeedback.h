#pragma once

#include "CoreMinimal.h"
#include "BlockFeedbackBase.h"
#include "FadingBlockFeedback.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, Abstract)
class AFadingBlockFeedback : public ABlockFeedbackBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _fadeCurve;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnFadeOutStarted(const float fadeDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnFadeOutEnded();

public:
	AFadingBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AFadingBlockFeedback) { return 0; }
