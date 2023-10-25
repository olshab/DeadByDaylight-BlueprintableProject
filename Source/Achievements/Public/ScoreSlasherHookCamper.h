#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreSlasherHookCamper.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UScoreSlasherHookCamper : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreSlasherHookCamper();
};

FORCEINLINE uint32 GetTypeHash(const UScoreSlasherHookCamper) { return 0; }
