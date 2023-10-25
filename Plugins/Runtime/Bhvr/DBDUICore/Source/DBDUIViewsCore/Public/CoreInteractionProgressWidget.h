#pragma once

#include "CoreMinimal.h"
#include "OnHemorrhageAnimationCompleteEvent.h"
#include "InteractionProgressViewInterface.h"
#include "StatusEffectViewData.h"
#include "TutorialHighlightViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreInteractionProgressWidget.generated.h"

class UCoreStatusEffectIcon;

UCLASS(Blueprintable, EditInlineNew)
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget, public IInteractionProgressViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCoreStatusEffectIcon*> Proficiencies;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnHemorrhageAnimationCompleteEvent _hemorrhageAnimationIsCompleteDelegate;

protected:
	UFUNCTION(BlueprintCallable)
	void SetProficiencies(const TArray<FStatusEffectViewData>& proficiencyDatas);

public:
	UCoreInteractionProgressWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionProgressWidget) { return 0; }
