#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "TestAnyActorPairQueryRangeIsTrue.generated.h"

class UActorPairQueryEvaluatorComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent;

public:
	UTestAnyActorPairQueryRangeIsTrue();
};

FORCEINLINE uint32 GetTypeHash(const UTestAnyActorPairQueryRangeIsTrue) { return 0; }
