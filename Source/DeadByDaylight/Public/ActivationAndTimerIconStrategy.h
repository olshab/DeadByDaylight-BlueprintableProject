#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationAndTimerIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UActivationAndTimerIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationAndTimerIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationAndTimerIconStrategy) { return 0; }
