#pragma once

#include "CoreMinimal.h"
#include "ChallengesMenuEventRitualsRewardTrackViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ChallengesMenuEventRitualsRewardTrackWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UChallengesMenuEventRitualsRewardTrackWidget : public UCoreTabContentWidget, public IChallengesMenuEventRitualsRewardTrackViewInterface
{
	GENERATED_BODY()

public:
	UChallengesMenuEventRitualsRewardTrackWidget();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsRewardTrackWidget) { return 0; }
