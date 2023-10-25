#pragma once

#include "CoreMinimal.h"
#include "AchievementBase.h"
#include "TotalPlaytimeAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UTotalPlaytimeAchievement : public UAchievementBase
{
	GENERATED_BODY()

public:
	UTotalPlaytimeAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UTotalPlaytimeAchievement) { return 0; }
