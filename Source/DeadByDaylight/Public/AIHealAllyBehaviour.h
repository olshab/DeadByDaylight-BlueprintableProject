#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AIHealAllyBehaviour.generated.h"

class ADBDAIPlayerController;
class UAIHealAllyBehaviourData;
class ADBDPlayer;
class UAICharacterBehaviourData;

UCLASS(Blueprintable)
class UAIHealAllyBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAIHealAllyBehaviourData* _behaviourData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _aiController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _aiPlayer;

private:
	UFUNCTION()
	void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UFUNCTION(BlueprintCallable)
	void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);

public:
	UAIHealAllyBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAIHealAllyBehaviour) { return 0; }
