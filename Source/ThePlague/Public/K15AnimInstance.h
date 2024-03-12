#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K15AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK15AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingVomit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpewingVomit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isVomitCoolDownEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pukeCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _carryFPV;

protected:
	UFUNCTION(BlueprintCallable)
	void VomitCoolDownEnd();

public:
	UK15AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK15AnimInstance) { return 0; }
