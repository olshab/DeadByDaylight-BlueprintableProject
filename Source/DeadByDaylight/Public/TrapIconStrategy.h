#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "TrapIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UTrapIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UTrapIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTrapIconStrategy) { return 0; }
