#pragma once

#include "CoreMinimal.h"
#include "EChallengesMenuEventRitualsState.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ChallengesMenuEventRitualsSubPresenter.generated.h"

class UChallengesMenuEventRitualsRitualsSubPresenter;
class IChallengesMenuEventRitualsViewInterface;
class UChallengesMenuEventRitualsRewardTrackSubPresenter;
class UChallengesMenuEventRitualsStoreSubPresenter;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UChallengesMenuEventRitualsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UChallengesMenuEventRitualsRitualsSubPresenter* _ritualsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UChallengesMenuEventRitualsRewardTrackSubPresenter* _rewardTrackSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UChallengesMenuEventRitualsStoreSubPresenter* _storeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IChallengesMenuEventRitualsViewInterface> _challengesMenuEventRitualsWidget;

private:
	UFUNCTION(BlueprintCallable)
	void SetEventRitualsState(const EChallengesMenuEventRitualsState eventRitualsState);

public:
	UChallengesMenuEventRitualsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsSubPresenter) { return 0; }
