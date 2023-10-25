#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "AddNewPerkAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UAddNewPerkAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UAddNewPerkAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UAddNewPerkAchievement) { return 0; }
