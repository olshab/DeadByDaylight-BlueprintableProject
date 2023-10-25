#pragma once

#include "CoreMinimal.h"
#include "EProgressModifier.h"
#include "NonTunableStat.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "ChargeableProgressSource.h"
#include "RifleChainTensionComponent.generated.h"

class USurvivorChainLinkableComponent;
class ARifleChain;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API URifleChainTensionComponent : public UActorComponent, public IChargeableProgressSource
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsBuildingTensionChanged, bool, isBuildingTension);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsBuildingTensionChanged OnIsBuildingTensionChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsBuildingTension, meta=(AllowPrivateAccess=true))
	bool _isBuildingTension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USurvivorChainLinkableComponent* _targetlinkable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTensionCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseTensionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _collisionTensionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _survivorPullingTensionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FNonTunableStat _currentTensionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	EProgressModifier _progressModifierForSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText _chargeProgressDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ARifleChain* _chain;

private:
	UFUNCTION(BlueprintCallable)
	void OnTensionChargeableCompletionChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsBuildingTension();

public:
	UFUNCTION(BlueprintPure)
	bool IsBuildingTension() const;

	UFUNCTION(BlueprintPure)
	float GetProgress() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URifleChainTensionComponent();
};

FORCEINLINE uint32 GetTypeHash(const URifleChainTensionComponent) { return 0; }
