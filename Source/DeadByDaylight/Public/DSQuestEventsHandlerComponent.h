#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DSQuestEventsHandlerComponent.generated.h"

class UQuestEventEvaluatorBase;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDSQuestEventsHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UQuestEventEvaluatorBase*> _evaluatorList;

public:
	UDSQuestEventsHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDSQuestEventsHandlerComponent) { return 0; }
