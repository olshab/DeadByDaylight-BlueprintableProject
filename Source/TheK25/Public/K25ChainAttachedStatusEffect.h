#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K25ChainAttachedStatusEffect.generated.h"

class UCurveFloat;
class UK25SurvivorChainAttachmentComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25ChainAttachedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _percentageReductionSpeedPerChainCurve;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChainAttachementComponent, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25SurvivorChainAttachmentComponent* _chainAttachmentComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _cachedNumberOfChainsAttached;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ChainAttachementComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25ChainAttachedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainAttachedStatusEffect) { return 0; }
