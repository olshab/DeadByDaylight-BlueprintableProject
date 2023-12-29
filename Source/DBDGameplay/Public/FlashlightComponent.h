#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "BlindingEffectorInterface.h"
#include "FlashlightComponent.generated.h"

class UFlashlightableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightComponent : public UActorComponent, public IBlindingEffectorInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFlashlightEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashlightEvent OnFlashlightTurnedOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashlightEvent OnFlashlightTurnedOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFlashlightEvent OnFlashlightablesUpdated;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseBlindnessDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _baseAccuracy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lagDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UFlashlightableComponent*> _flashlightables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UFlashlightableComponent*> _autonomousLitFlashlightables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReplicatedLitFlashlightables, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UFlashlightableComponent*> _replicatedLitFlashlightables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsOwnerLagging, Transient, meta=(AllowPrivateAccess=true))
	bool _isOwnerLagging;

public:
	UFUNCTION(BlueprintCallable)
	void TurnOn();

	UFUNCTION(BlueprintCallable)
	void TurnOff();

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetAndUpdateAutonomousLitFlashlightables(const TArray<UFlashlightableComponent*>& newLitFlashlightables);

	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedLitFlashlightables();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsOwnerLagging();

public:
	UFUNCTION(BlueprintPure)
	bool IsOn() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveTimeToBlindModifier() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveBlindnessDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlashlightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightComponent) { return 0; }
