#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ChallengesMenuDailyRitualsSubPresenter.generated.h"

class IChallengesMenuDailyRitualsViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UChallengesMenuDailyRitualsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IChallengesMenuDailyRitualsViewInterface> _challengesMenuDailyRitualsWidget;

public:
	UChallengesMenuDailyRitualsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuDailyRitualsSubPresenter) { return 0; }
