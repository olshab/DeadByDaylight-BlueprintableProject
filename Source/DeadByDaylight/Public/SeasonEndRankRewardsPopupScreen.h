#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "SeasonEndRankRewardsPopupScreen.generated.h"

UCLASS(Blueprintable)
class USeasonEndRankRewardsPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	USeasonEndRankRewardsPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndRankRewardsPopupScreen) { return 0; }
