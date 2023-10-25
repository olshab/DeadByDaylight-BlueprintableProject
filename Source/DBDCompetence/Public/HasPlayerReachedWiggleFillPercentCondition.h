#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "HasPlayerReachedWiggleFillPercentCondition.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsWigglePercentReached, meta=(AllowPrivateAccess=true))
	bool _isWigglePercentReached;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsWigglePercentReached();

	UFUNCTION(BlueprintCallable)
	void Authority_OnOwnerWiggleChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHasPlayerReachedWiggleFillPercentCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasPlayerReachedWiggleFillPercentCondition) { return 0; }
