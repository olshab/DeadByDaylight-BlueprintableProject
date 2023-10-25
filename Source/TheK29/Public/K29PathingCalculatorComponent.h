#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K29PathingCalculatorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29PathingCalculatorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxStepHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxStepHeightDownwards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _horizontalAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _verticalAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gridLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _detectionHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _floorSearchLengthFromActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumWallDashDistanceCarryingSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _floorCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lineOfSightCapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lineOfSightCapsuleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lineOfSightCapsuleHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumWalkableAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _groundCollisionDetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _allowedGroundBlockerHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimalLedgeDistance;

public:
	UK29PathingCalculatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PathingCalculatorComponent) { return 0; }
