#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ChallengesMenuEventRitualsRitualsSubPresenter.generated.h"

class IChallengesMenuEventRitualsRitualsViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UChallengesMenuEventRitualsRitualsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IChallengesMenuEventRitualsRitualsViewInterface> _challengesMenuEventRitualsRitualsWidget;

public:
	UChallengesMenuEventRitualsRitualsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsRitualsSubPresenter) { return 0; }
