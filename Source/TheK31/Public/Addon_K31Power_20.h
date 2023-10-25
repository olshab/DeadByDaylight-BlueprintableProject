#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "EK31DroneStateID.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "Addon_K31Power_20.generated.h"

class AK31Drone;
class UTerrorRadiusEmitterComponent;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_20 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _terrorRadiusSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _terrorRadiusDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<EK31DroneStateID> _allowedDroneStatesForEffectToApply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TargetDrone, Transient, meta=(AllowPrivateAccess=true))
	AK31Drone* _targetDrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _terrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _indicatorEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _indicatorEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _undetectableEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TargetDrone();

	UFUNCTION(BlueprintCallable)
	void Authority_OnTerrorRadiusLifetimeTimerDone();

	UFUNCTION()
	void Authority_OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAddon_K31Power_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_20) { return 0; }
