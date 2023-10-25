#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterRepairGeneratorBehaviour.generated.h"

class UAICharacterRepairGeneratorBehaviourData;
class ADBDPlayer;
class UInteractor;
class ADBDAIPlayerController;

UCLASS(Blueprintable)
class UAICharacterRepairGeneratorBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _aiPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAIPlayerController* _aiPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _targetInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAICharacterRepairGeneratorBehaviourData* _characterRepairGeneratorData;

private:
	UFUNCTION()
	void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEventHandler(bool isAutoCompleted);

public:
	UAICharacterRepairGeneratorBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterRepairGeneratorBehaviour) { return 0; }
