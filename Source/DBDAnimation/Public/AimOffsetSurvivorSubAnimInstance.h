#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "AimOffsetSurvivorSubAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UAimOffsetSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _yaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _yawInterpolated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _allowLookAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isDrasticYawChangeDetected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawDeadzoneStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawClampValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawDrasticChangeUpperLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawDrasticChangeLowerLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawDrasticChangeInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _yawInterpolateEaseIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _yawInterpolateEaseOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawInterpolationEaseInLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawInterpolationEaseOutDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isYawInDeadZone;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _currentTargetYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _yawAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _yawAccelerationTime;

public:
	UAimOffsetSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UAimOffsetSurvivorSubAnimInstance) { return 0; }
