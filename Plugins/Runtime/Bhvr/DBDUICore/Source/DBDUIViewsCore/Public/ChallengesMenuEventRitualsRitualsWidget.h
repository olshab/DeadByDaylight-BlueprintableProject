#pragma once

#include "CoreMinimal.h"
#include "ChallengesMenuEventRitualsRitualsViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ChallengesMenuEventRitualsRitualsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UChallengesMenuEventRitualsRitualsWidget : public UCoreTabContentWidget, public IChallengesMenuEventRitualsRitualsViewInterface
{
	GENERATED_BODY()

public:
	UChallengesMenuEventRitualsRitualsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsRitualsWidget) { return 0; }
