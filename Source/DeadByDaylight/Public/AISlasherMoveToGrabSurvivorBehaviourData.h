#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AISlasherMoveToGrabSurvivorBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable)
class UAISlasherMoveToGrabSurvivorBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _targetSurvivor;

public:
	UFUNCTION(BlueprintCallable)
	void Init(ACamperPlayer* targetSurvivor);

public:
	UAISlasherMoveToGrabSurvivorBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherMoveToGrabSurvivorBehaviourData) { return 0; }
