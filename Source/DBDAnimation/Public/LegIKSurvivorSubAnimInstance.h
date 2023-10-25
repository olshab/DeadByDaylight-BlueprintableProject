#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "LegIKSurvivorSubAnimInstance.generated.h"

class ULocomotionPredictor;
class UAnimCollection;
class UBaseGroundDetectorComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API ULegIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _leftFootOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _rightFootOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _pelvisOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FRotator _rightFootDeltaRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FRotator _leftFootDeltaRotator;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimCollection* AnimCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _floorJoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _pelvisOffsetTreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FFloatRange _pelvisOffsetRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FFloatRange _pelvisOffsetRangeCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _pelvisOffsetInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FFloatRange _footOffsetRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FFloatRange _footOffsetRangeCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _footOffsetInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FFloatRange _footPitchDeltaRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseGroundDetectorComponent* _leftFootGroundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseGroundDetectorComponent* _rightFootGroundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float maxLocalHeightForPlanting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULocomotionPredictor* _locomotionPredictor;

public:
	ULegIKSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULegIKSurvivorSubAnimInstance) { return 0; }
