#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "BearTrapAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class THETRAPPER_API UBearTrapAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _containsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTrapSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _wasJustDisarmed;

public:
	UFUNCTION(BlueprintCallable)
	void SetWasJustDisarmed(bool wasJustDisarmed);

	UFUNCTION(BlueprintCallable)
	void SetIsTrapSet(bool isTrapSet);

	UFUNCTION(BlueprintCallable)
	void SetIsBeingCollected(bool isBeingCollected);

	UFUNCTION(BlueprintCallable)
	void SetContainsSurvivor(bool containsSurvivor);

public:
	UBearTrapAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBearTrapAnimInstance) { return 0; }
