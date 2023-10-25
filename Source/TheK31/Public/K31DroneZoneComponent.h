#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31PlayerDroneZoneStruct.h"
#include "K31DroneZoneComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneZoneComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, FK31PlayerDroneZoneStruct> _playerDroneZoneStructMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxDistanceZ_ScoutingLaser;

public:
	UK31DroneZoneComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneZoneComponent) { return 0; }
