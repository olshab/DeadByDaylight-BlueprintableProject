#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K33TurretDestructionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretDestructionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _autoDestroyTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _autoDestroyPauseSurvivorRange;

public:
	UFUNCTION(BlueprintPure)
	float GetTurretDestructionDisappearanceDelay() const;

public:
	UK33TurretDestructionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDestructionComponent) { return 0; }
