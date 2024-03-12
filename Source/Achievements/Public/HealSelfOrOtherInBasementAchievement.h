#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "HealSelfOrOtherInBasementAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UHealSelfOrOtherInBasementAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UHealSelfOrOtherInBasementAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UHealSelfOrOtherInBasementAchievement) { return 0; }
