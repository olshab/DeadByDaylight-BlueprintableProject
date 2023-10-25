#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveWhenApplicableAndActivationAndCooldownPerkIconStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UActiveWhenApplicableAndActivationAndCooldownPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveWhenApplicableAndActivationAndCooldownPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveWhenApplicableAndActivationAndCooldownPerkIconStrategy) { return 0; }
