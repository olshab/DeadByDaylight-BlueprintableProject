#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Engine/NetSerialization.h"
#include "ChainLinkableComponent.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ESightStatus.h"
#include "SurvivorChainLinkableComponent.generated.h"

class USurvivorReelVelocityAdditiveStrategy;
class ADBDPlayer;
class ASlasherPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API USurvivorChainLinkableComponent : public UChainLinkableComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pullbackAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _immobilizationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _linkableInteractionTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _cancelableInteractionTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USurvivorReelVelocityAdditiveStrategy> _velocityAdditiveStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FVector_NetQuantize10 _linkedMoveInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _immobilizationEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _immobilizationStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_VelocityAdditiveStrategy, Transient, Export, meta=(AllowPrivateAccess=true))
	USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategy;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSurvivorBreakFreeFromHarpoon(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSightStatusChanged(ESightStatus status);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_VelocityAdditiveStrategy();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLocallyObservedChanged(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorChainLinkableComponent) { return 0; }
