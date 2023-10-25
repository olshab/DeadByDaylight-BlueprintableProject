#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterBehaviourInteractWithActor.generated.h"

class UAICharacterBehaviourInteractWithActorData;
class ADBDPlayer;
class ADBDAIPlayerController;

UCLASS(Blueprintable)
class UAICharacterBehaviourInteractWithActor : public UAICharacterBehaviour
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _aiPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIPlayerController* _aiPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAICharacterBehaviourInteractWithActorData* _behaviourData;

private:
	UFUNCTION()
	void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UAICharacterBehaviourInteractWithActor();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourInteractWithActor) { return 0; }
