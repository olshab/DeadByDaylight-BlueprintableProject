#pragma once

#include "CoreMinimal.h"
#include "SingleModifierCondition.h"
#include "TimerElapsedCondition.generated.h"

class UTimerObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTimerElapsedCondition : public USingleModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _timer;

public:
	UTimerElapsedCondition();
};

FORCEINLINE uint32 GetTypeHash(const UTimerElapsedCondition) { return 0; }
