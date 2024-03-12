#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ChallengesMenuEventRitualsRewardTrackSubPresenter.generated.h"

class IChallengesMenuEventRitualsRewardTrackViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UChallengesMenuEventRitualsRewardTrackSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IChallengesMenuEventRitualsRewardTrackViewInterface> _challengesMenuEventRitualsRewardTrackWidget;

public:
	UChallengesMenuEventRitualsRewardTrackSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsRewardTrackSubPresenter) { return 0; }
