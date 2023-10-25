#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterEvasionBehaviour.generated.h"

class ADBDPlayer;
class AActor;
class ADBDAIPlayerController;
class UCharacterEvasionBehaviourData;

UCLASS(Blueprintable)
class UAICharacterEvasionBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _prey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _preyAIController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _currentEscapePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCharacterEvasionBehaviourData* _characterEvasionData;

private:
	UFUNCTION()
	void EscapeDestinationReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UAICharacterEvasionBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterEvasionBehaviour) { return 0; }
