#pragma once

#include "CoreMinimal.h"
#include "ChallengesMenuEventRitualsStoreViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ChallengesMenuEventRitualsStoreWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UChallengesMenuEventRitualsStoreWidget : public UCoreTabContentWidget, public IChallengesMenuEventRitualsStoreViewInterface
{
	GENERATED_BODY()

public:
	UChallengesMenuEventRitualsStoreWidget();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuEventRitualsStoreWidget) { return 0; }
