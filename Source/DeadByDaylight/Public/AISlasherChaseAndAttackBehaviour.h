#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AISlasherChaseAndAttackBehaviour.generated.h"

class UAISlasherChaseAndAttackBehaviourData;
class ASlasherPlayer;
class ADBDAIPlayerController;

UCLASS(Blueprintable)
class UAISlasherChaseAndAttackBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAISlasherChaseAndAttackBehaviourData* _behaviourData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _slasherPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _slasherAIPlayerController;

public:
	UAISlasherChaseAndAttackBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherChaseAndAttackBehaviour) { return 0; }
