#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AISlasherMoveToGrabSurvivorBehaviour.generated.h"

class ADBDAIPlayerController;
class UAISlasherMoveToGrabSurvivorBehaviourData;
class ASlasherPlayer;

UCLASS(Blueprintable)
class UAISlasherMoveToGrabSurvivorBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAISlasherMoveToGrabSurvivorBehaviourData* _behaviourData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _slasherPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _slasherAIPlayerController;

public:
	UAISlasherMoveToGrabSurvivorBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherMoveToGrabSurvivorBehaviour) { return 0; }
