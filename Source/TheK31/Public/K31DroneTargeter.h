#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K31DroneTargeter.generated.h"

class AK31Drone;
class ADBDActorIndicator;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneTargeter : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ADBDActorIndicator> _indicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxAngleFromScreenCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDActorIndicator* _indicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK31Drone* _target;

public:
	UK31DroneTargeter();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneTargeter) { return 0; }
