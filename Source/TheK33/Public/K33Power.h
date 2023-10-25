#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "K33Power.generated.h"

class UInteractor;
class UChargeableComponent;
class UK33TurretDamageComponent;
class UK33PowerChargePresentationItemProgressComponent;
class UK33TailAttackInteraction;
class UBoxPlayerOverlapComponent;
class UK33KillerTunnelStateComponent;
class UPowerChargeComponent;
class UActorPoolInitializer;
class ULocalActorPoolComponent;
class UStatusEffect;
class UK33QuadrupedComponent;
class UK33KillerControlStationSelectorComponent;
class UK33SurvivorDetectionComponent;
class UK33TurretPlacer;
class AK33Husk;
class AK33FeetVFX;
class UAuthoritativeActorPoolComponent;

UCLASS(Blueprintable)
class AK33Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _tailAttackChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _tailAttackChargeTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK33PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _k33PowerCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalActorPoolComponent* _feetActorPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _killerStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _survivorStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33KillerTunnelStateComponent> _killerTunnelComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33QuadrupedComponent> _quadrupedComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33KillerControlStationSelectorComponent> _controlStationSelectorComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33SurvivorDetectionComponent> _survivorDetectionComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33TurretDamageComponent> _turretDamageComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33TurretPlacer> _turretPlacerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK33Husk> _k33HuskClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TurretPlacers, Export, meta=(AllowPrivateAccess=true))
	TArray<UK33TurretPlacer*> _turretPlacers;

	UPROPERTY(EditAnywhere)
	uint32 _feetPoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK33FeetVFX> _feetActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK33Husk* _k33Husk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActorPoolInitializer* _turretPoolInitializer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _turretPool;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TurretPlacers();

public:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK33TailAttackInteraction* GetTailAttackInteraction();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK33Power();
};

FORCEINLINE uint32 GetTypeHash(const AK33Power) { return 0; }
