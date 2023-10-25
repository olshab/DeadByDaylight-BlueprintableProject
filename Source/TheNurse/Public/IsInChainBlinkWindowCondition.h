#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsInChainBlinkWindowCondition.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UIsInChainBlinkWindowCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsInChainBlinkWindowCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsInChainBlinkWindowCondition) { return 0; }
