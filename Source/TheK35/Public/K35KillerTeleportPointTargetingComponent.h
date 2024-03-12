#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K35KillerTeleportPointTargetingComponent.generated.h"

class AK35KillerTeleportPoint;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35KillerTeleportPointTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumTeleportDistance;

public:
	UFUNCTION(BlueprintPure)
	bool HasTarget() const;

	UFUNCTION(BlueprintPure)
	AK35KillerTeleportPoint* GetTarget() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_NewKillerKillerTeleportPointTargeted(AK35KillerTeleportPoint* newTarget);

public:
	UK35KillerTeleportPointTargetingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerTeleportPointTargetingComponent) { return 0; }
