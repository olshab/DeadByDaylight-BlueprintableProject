#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "QuadrupedIKSubAnimInstance.generated.h"

class UWorld;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UQuadrupedIKSubAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _enableIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETraceTypeQuery> _traceTypeQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _traceComplex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _ignoreTouches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _noGroundTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _adjustCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _adjustTail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _footIkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisIkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisIkSpeedFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxIKTargetDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxBoneDistanceFromTargetMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxBoneDistanceFromTargetIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromCapsuleFrontFeetIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceFromCapsuleFrontFeetIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromCapsuleBackFeetIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceFromCapsuleBackFeetIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromCapsuleFrontFeetMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceFromCapsuleFrontFeetMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minDistanceFromCapsuleBackFeetMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceFromCapsuleBackFeetMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxIKTargetDistanceFromPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisRotationMinOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisRotationMaxOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMinFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisPositionOffsetMaxFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontFeetLineTraceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontFeetLineTraceEndOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backFeetLineTraceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backFeetLineTraceEndOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontFeetUpDisplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _frontFeetDownDisplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backFeetUpDisplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backFeetDownDisplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _footDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _isMovingTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _ungroundedFeetDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _pelvisSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _cameraSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _tailSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftFrontFootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftFrontFootPoleSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightFrontFootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightFrontFootPoleSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftBackFootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightBackFootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftFrontFootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightFrontFootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftBackFootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightBackFootBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftFrontFootRootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightFrontFootRootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _leftBackFootRootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rightBackFootRootSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _leftFrontFootMaxExtension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rightFrontFootMaxExtension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _leftBackFootMaxExtension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rightBackFootMaxExtension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _leftFrontFootUngroundedTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rightFrontFootUngroundedTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _leftBackFootUngroundedTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rightBackFootUngroundedTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _pelvisPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _worldPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _cameraRotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _cameraPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _tailRotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _tailPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftFrontFootLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftFrontFootPoleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftFrontFootPoleCurrentLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightFrontFootPoleCurrentLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightFrontFootLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightFrontFootPoleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftBackFootLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightBackFootLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform _leftBackFootTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform _rightBackFootTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _leftFrontFootRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _rightFrontFootRotation;

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
	UQuadrupedIKSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UQuadrupedIKSubAnimInstance) { return 0; }
