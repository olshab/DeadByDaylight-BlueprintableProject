#pragma once

#include "CoreMinimal.h"
#include "ChallengesMenuDailyRitualsViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ChallengesMenuDailyRitualsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UChallengesMenuDailyRitualsWidget : public UCoreTabContentWidget, public IChallengesMenuDailyRitualsViewInterface
{
	GENERATED_BODY()

public:
	UChallengesMenuDailyRitualsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuDailyRitualsWidget) { return 0; }
