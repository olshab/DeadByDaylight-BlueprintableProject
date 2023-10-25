#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Tinkerer.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AActor;
class UChargeableComponent;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTinkerer : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _triggerThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceThreshold;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _activationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AActor*, float> _generatorActivationTimes;

public:
	UFUNCTION(BlueprintPure)
	float GetTriggerThreshold() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimeAtLevel() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Authority_OnUndetectableGeneratorInterrupt(ADBDPlayer* instigator, ADBDPlayer* target);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Authority_OnUndetectableAttackSuccessNearActiveGenerator(ADBDPlayer* instigator, ADBDPlayer* target);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Authority_OnGeneratorReachedThreshold(AGenerator* generator);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnGeneratorChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UTinkerer();
};

FORCEINLINE uint32 GetTypeHash(const UTinkerer) { return 0; }
