#pragma once

#include "CoreMinimal.h"
#include "EscapeTypeAchievement.h"
#include "ScoreCamperSurviveAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UScoreCamperSurviveAchievement : public UEscapeTypeAchievement
{
	GENERATED_BODY()

public:
	UScoreCamperSurviveAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreCamperSurviveAchievement) { return 0; }
