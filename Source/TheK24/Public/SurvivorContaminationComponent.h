#pragma once

#include "CoreMinimal.h"
#include "TagStateBool.h"
#include "SurvivorStatusInterface.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "EContaminator.h"
#include "SurvivorContaminationComponent.generated.h"

class UStatusEffect;
class UChargeableComponent;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK24_API USurvivorContaminationComponent : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsContaminated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isContaminated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _injectSerumChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _injectSerumSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hinderedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _contaminationHinderedSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _contaminationHinderedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UInteractionDefinition>> _injectSerumInteractionsClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_InjectSerumInteractions, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UInteractionDefinition*> _injectSerumInteractions;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsContaminated();

	UFUNCTION(BlueprintCallable)
	void OnRep_InjectSerumInteractions();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnContaminationCured_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnContaminated_SFX_Stinger_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnContaminated_Cosmetic(EContaminator contaminator);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_OnContaminated_Cosmetic(EContaminator contaminator);

public:
	UFUNCTION(BlueprintPure)
	bool IsContaminated() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorContaminationComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorContaminationComponent) { return 0; }
