#pragma once

#include "CoreMinimal.h"
#include "MatchmakingViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreMatchmakingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMatchmakingWidget : public UCoreBaseUserWidget, public IMatchmakingViewInterface
{
	GENERATED_BODY()

public:
	UCoreMatchmakingWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMatchmakingWidget) { return 0; }
