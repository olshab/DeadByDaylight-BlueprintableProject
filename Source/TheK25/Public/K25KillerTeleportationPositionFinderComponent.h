#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "EK25TeleportLocationStatus.h"
#include "K25KillerTeleportationPositionFinderComponent.generated.h"

class AEscapeDoor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25KillerTeleportationPositionFinderComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastZOffet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerInRangeMinimumDistanceCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerInRangeMaxRangePercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _deltaHeightThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minDistanceFromLamentConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxDistanceFromLamentConfiguration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeBetweenFailsafeChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EK25TeleportLocationStatus _teleportLocationStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _bestTeleportLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AEscapeDoor*> _escapeDoors;

public:
	UK25KillerTeleportationPositionFinderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25KillerTeleportationPositionFinderComponent) { return 0; }
