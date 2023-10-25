#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourInteractWithActor.h"
#include "AICharacterBehaviourInteractWithHook.generated.h"

class AMeatHook;

UCLASS(Blueprintable)
class UAICharacterBehaviourInteractWithHook : public UAICharacterBehaviourInteractWithActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AMeatHook* _targetHook;

public:
	UAICharacterBehaviourInteractWithHook();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourInteractWithHook) { return 0; }
