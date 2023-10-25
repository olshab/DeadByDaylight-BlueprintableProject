#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BipedIKSubAnimInstance.generated.h"

class UWorld;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UBipedIKSubAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _enableIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETraceTypeQuery> _traceTypeQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _traceComplex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _ignoreTouches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _noGroundTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _footIkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisIkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxExtensionLeftFoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxExtensionRightFoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _footIkSpeedMovingHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _footIkSpeedIdleHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _ikBlendSpeedHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _footIkRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisIkSpeedHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxIKTargetDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMinHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMaxHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMinIdleHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMaxIdleHF2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontFeetLineTraceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontFeetLineTraceEndOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backFeetLineTraceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backFeetLineTraceEndOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromCapsuleIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceFromCapsuleIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromCapsuleMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceFromCapsuleMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _pelvisSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftBackFootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightBackFootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftBackFootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightBackFootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftBackFootRootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightBackFootRootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _pelvisPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftBackFootLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightBackFootLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform _leftBackFootTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform _rightBackFootTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _leftBackFootRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _rightBackFootRotation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UWorld* _world;

public:
	UBipedIKSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBipedIKSubAnimInstance) { return 0; }
