#pragma once

#include "CoreMinimal.h"
#include "ChaseComponent.h"
#include "ChaseeCharacterComponent.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaseeCharacterComponent : public UChaseComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	float _totalChaseTimeThisMatchDebugReplicated;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnGeneratorPercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChaseeCharacterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChaseeCharacterComponent) { return 0; }
