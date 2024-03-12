#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "SeancePerkIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API USeancePerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	USeancePerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USeancePerkIconStrategy) { return 0; }
