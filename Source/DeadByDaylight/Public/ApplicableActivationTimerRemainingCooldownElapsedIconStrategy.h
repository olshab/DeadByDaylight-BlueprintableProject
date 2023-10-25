#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ApplicableActivationTimerRemainingCooldownElapsedIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UApplicableActivationTimerRemainingCooldownElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UApplicableActivationTimerRemainingCooldownElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UApplicableActivationTimerRemainingCooldownElapsedIconStrategy) { return 0; }
