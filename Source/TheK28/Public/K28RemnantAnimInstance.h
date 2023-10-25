#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EK28RemnantState.h"
#include "K28RemnantAnimInstance.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, NonTransient)
class UK28RemnantAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK28RemnantState _currentRemnantState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTeleportingToRemnant;

protected:
	UFUNCTION(BlueprintCallable)
	ACamperPlayer* ConsumeSurvivorWhoDestroyedRemnant();

public:
	UK28RemnantAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28RemnantAnimInstance) { return 0; }
