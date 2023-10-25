#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveOnTimerOrApplicablePerkIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UActiveOnTimerOrApplicablePerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveOnTimerOrApplicablePerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveOnTimerOrApplicablePerkIconStrategy) { return 0; }
