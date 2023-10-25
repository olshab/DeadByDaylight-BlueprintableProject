#pragma once

#include "CoreMinimal.h"
#include "KillerDamagedSurvivorBaseAchievement.h"
#include "KillerDamagedSurvivorWithHinderedAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UKillerDamagedSurvivorWithHinderedAchievement : public UKillerDamagedSurvivorBaseAchievement
{
	GENERATED_BODY()

public:
	UKillerDamagedSurvivorWithHinderedAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerDamagedSurvivorWithHinderedAchievement) { return 0; }
