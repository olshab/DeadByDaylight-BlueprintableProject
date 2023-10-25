#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsCooldownTimerActive.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsCooldownTimerActive : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsCooldownTimerActive();
};

FORCEINLINE uint32 GetTypeHash(const UIsCooldownTimerActive) { return 0; }
