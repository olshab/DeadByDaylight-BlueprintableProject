#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourInteractWithActor.h"
#include "AICharacterBehaviourDropPallet.generated.h"

class APallet;

UCLASS(Blueprintable)
class UAICharacterBehaviourDropPallet : public UAICharacterBehaviourInteractWithActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APallet* _targetPallet;

public:
	UAICharacterBehaviourDropPallet();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourDropPallet) { return 0; }
