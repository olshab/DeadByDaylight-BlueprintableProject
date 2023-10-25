#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K24AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK24AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInPowerMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isChargingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isK24PowerAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRequestingPowerAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _powerLevel;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerPowerLevelChanged(int32 powerLevel);

public:
	UK24AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK24AnimInstance) { return 0; }
