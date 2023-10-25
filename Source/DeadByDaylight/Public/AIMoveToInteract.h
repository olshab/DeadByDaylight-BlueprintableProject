#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AIMoveToInteract.generated.h"

class UAICharacterBehaviourData;
class UAIMoveToInteractData;
class ADBDAIPlayerController;
class ADBDPlayer;

UCLASS(Blueprintable)
class UAIMoveToInteract : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAIMoveToInteractData* _aiMoveToInteractData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _aiController;

private:
	UFUNCTION()
	void InteractionPointReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UFUNCTION(BlueprintCallable)
	void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);

public:
	UAIMoveToInteract();
};

FORCEINLINE uint32 GetTypeHash(const UAIMoveToInteract) { return 0; }
