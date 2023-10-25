#pragma once

#include "CoreMinimal.h"
#include "PhysicsBasedProjectileMovementComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "K25ControlledProjectileMovementComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25ControlledProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _projectileBaseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _baseProjectileMaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _projectileSpeedIncreaseTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maximumTravelDistanceStat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _projectileSpeedIncreaseMultiplier;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _totalDistanceTravelled;

public:
	UK25ControlledProjectileMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25ControlledProjectileMovementComponent) { return 0; }
