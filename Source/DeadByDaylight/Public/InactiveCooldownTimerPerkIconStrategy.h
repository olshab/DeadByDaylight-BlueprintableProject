#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "InactiveCooldownTimerPerkIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UInactiveCooldownTimerPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UInactiveCooldownTimerPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UInactiveCooldownTimerPerkIconStrategy) { return 0; }
