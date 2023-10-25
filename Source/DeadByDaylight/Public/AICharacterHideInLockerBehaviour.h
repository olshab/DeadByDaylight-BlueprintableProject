#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterHideInLockerBehaviour.generated.h"

class ADBDAIPlayerController;
class UAICharacterHideInLockerBehaviourData;
class ADBDPlayer;

UCLASS(Blueprintable)
class UAICharacterHideInLockerBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _aiPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _aiPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAICharacterHideInLockerBehaviourData* _characterHideInLockerData;

private:
	UFUNCTION()
	void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UAICharacterHideInLockerBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterHideInLockerBehaviour) { return 0; }
