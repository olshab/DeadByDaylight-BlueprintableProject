#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "EChainHuntState.h"
#include "ChainHuntStateData.h"
#include "LamentConfigurationChainHuntComponent.generated.h"

class UCurveFloat;
class UK25SurvivorChainHuntEffectsComponent;
class UK25KillerChainHuntEffectsComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULamentConfigurationChainHuntComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _floorChainHuntTimeBetweenChainStrikes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _chainHuntChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _chainNumberPerChainHuntCluster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _timeBetweenChainHuntClusterStrikes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK25KillerChainHuntEffectsComponent> _killerChainHuntEffectsComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK25SurvivorChainHuntEffectsComponent> _survivorChainHuntEffectsComponentClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _cachedAdditiveChainStrikeDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChainHuntStateData, Transient, meta=(AllowPrivateAccess=true))
	FChainHuntStateData _chainHuntStateData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EChainHuntState _oldChainHuntState;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ChainHuntStateData();

public:
	UFUNCTION(BlueprintPure)
	float GetChainHuntProgressPercentage() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULamentConfigurationChainHuntComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationChainHuntComponent) { return 0; }
