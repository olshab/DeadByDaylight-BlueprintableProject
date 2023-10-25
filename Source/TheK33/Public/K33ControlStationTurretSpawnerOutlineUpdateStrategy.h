#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "DBDTunableRowHandle.h"
#include "K33ControlStationTurretSpawnerOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33ControlStationTurretSpawnerOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceToRevealToSurvivor;

public:
	UK33ControlStationTurretSpawnerOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK33ControlStationTurretSpawnerOutlineUpdateStrategy) { return 0; }
