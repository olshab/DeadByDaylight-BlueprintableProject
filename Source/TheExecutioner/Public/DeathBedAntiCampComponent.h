#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "DeathBedAntiCampComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDeathBedAntiCampComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _anticampZoneDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _anticampZoneTimeToTrigger;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerDeathBedRelocate();

	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UDeathBedAntiCampComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDeathBedAntiCampComponent) { return 0; }
