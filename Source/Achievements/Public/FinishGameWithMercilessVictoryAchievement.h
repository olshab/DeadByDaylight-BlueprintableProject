#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "FinishGameWithMercilessVictoryAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UFinishGameWithMercilessVictoryAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UFinishGameWithMercilessVictoryAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UFinishGameWithMercilessVictoryAchievement) { return 0; }
