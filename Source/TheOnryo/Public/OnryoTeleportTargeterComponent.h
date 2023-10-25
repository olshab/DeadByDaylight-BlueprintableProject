#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OnryoTeleportTargeterComponent.generated.h"

class AOnryoTelevision;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOnryoTeleportTargeterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maximumTeleportAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TargetTelevision, Transient, meta=(AllowPrivateAccess=true))
	AOnryoTelevision* _replicatedTargetTelevision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AOnryoTelevision* _localTargetTelevision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AOnryoTelevision* _previousTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _targetUpdateInterval;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetTeleportTarget(AOnryoTelevision* tv);

	UFUNCTION(BlueprintCallable)
	void OnRep_TargetTelevision();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOnryoTeleportTargeterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTeleportTargeterComponent) { return 0; }
