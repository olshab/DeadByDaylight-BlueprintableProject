#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OnryoTVInitialCooldownStateComponent.generated.h"

class UTimerObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONRYO_API UOnryoTVInitialCooldownStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _initialTVCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsDone, Transient, meta=(AllowPrivateAccess=true))
	bool _isDone;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsDone();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnCooldownDone();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_TryStartCooldown();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOnryoTVInitialCooldownStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTVInitialCooldownStateComponent) { return 0; }
