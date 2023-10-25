#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreSlasherSacrificeSuccess.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UScoreSlasherSacrificeSuccess : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreSlasherSacrificeSuccess();
};

FORCEINLINE uint32 GetTypeHash(const UScoreSlasherSacrificeSuccess) { return 0; }
