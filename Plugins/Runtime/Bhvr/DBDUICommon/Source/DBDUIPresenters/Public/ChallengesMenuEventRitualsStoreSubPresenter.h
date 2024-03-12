#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ChallengesMenuEventRitualsStoreSubPresenter.generated.h"

class IChallengesMenuEventRitualsStoreViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UChallengesMenuEventRitualsStoreSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IChallengesMenuEventRitualsStoreViewInterface> _challengesMenuEventRitualsStoreWidget;

public:
	UChallengesMenuEventRitualsStoreSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsStoreSubPresenter) { return 0; }
