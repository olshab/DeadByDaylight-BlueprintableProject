#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "CrownPickupInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY_API UCrownPickupInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _attachToSocketName;

	UPROPERTY(EditAnywhere)
	FGameplayTag _pickupScoreEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInteractionChargeComplete;

public:
	UCrownPickupInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCrownPickupInteraction) { return 0; }
