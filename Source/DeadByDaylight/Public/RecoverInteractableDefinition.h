#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "RecoverInteractableDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API URecoverInteractableDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _recoverStopPercentTunableName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _camperRecoverHealSpeedMultiplierTunableName;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsKillerInteracting() const;

public:
	URecoverInteractableDefinition();
};

FORCEINLINE uint32 GetTypeHash(const URecoverInteractableDefinition) { return 0; }
