#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AIMoveToPosition.generated.h"

class ADBDPlayer;
class UAIMoveToPositionData;
class ADBDAIPlayerController;
class UAICharacterBehaviourData;

UCLASS(Blueprintable)
class UAIMoveToPosition : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAIMoveToPositionData* _aiBehaviourData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _aiController;

private:
	UFUNCTION()
	void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UFUNCTION(BlueprintCallable)
	void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);

public:
	UAIMoveToPosition();
};

FORCEINLINE uint32 GetTypeHash(const UAIMoveToPosition) { return 0; }
