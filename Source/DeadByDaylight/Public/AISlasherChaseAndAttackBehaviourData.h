#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AISlasherChaseAndAttackBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable)
class UAISlasherChaseAndAttackBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _targetSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _sqrtAttackRangeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _sqrtMaxTargetPositionDiff;

public:
	UFUNCTION(BlueprintCallable)
	void Init(ACamperPlayer* targetSurvivor, float attackRangeDistance, float locationDistance);

public:
	UAISlasherChaseAndAttackBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherChaseAndAttackBehaviourData) { return 0; }
