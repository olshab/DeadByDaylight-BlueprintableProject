#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "DemogorgonAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UDemogorgonAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _leftArmPushback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rightArmPushback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDemogorgonCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _demogorgonChargingPercent;

public:
	UDemogorgonAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonAnimInstance) { return 0; }
