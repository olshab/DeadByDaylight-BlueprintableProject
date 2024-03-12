#pragma once

#include "CoreMinimal.h"
#include "KillerDamagedSurvivorBaseAchievement.h"
#include "InjureSurvivorInBasementAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UInjureSurvivorInBasementAchievement : public UKillerDamagedSurvivorBaseAchievement
{
	GENERATED_BODY()

public:
	UInjureSurvivorInBasementAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UInjureSurvivorInBasementAchievement) { return 0; }
