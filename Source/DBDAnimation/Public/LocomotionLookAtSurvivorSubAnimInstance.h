#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "LocomotionLookAtSurvivorSubAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API ULocomotionLookAtSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isHealthy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _aimOffsetPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _aimOffsetYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _aimOffsetYawInterpolated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _allowLookAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDrasticAimOffsetYawChangeDetected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawDeadzoneStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawClampValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawDrasticChangeUpperLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawDrasticChangeLowerLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawDrasticChangeInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _aimOffsetYawInterpolateEaseIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _aimOffsetYawInterpolateEaseOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawInterpolationEaseInLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aimOffsetYawInterpolationEaseOutDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAimOffsetYawInDeadZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _alphaAimOffsetPitchDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _alphaAimOffsetPitchCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _alphaAimOffsetPitchUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingHeavyCarry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingLightCarry;

public:
	ULocomotionLookAtSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULocomotionLookAtSurvivorSubAnimInstance) { return 0; }
