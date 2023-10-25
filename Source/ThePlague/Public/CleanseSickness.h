#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "CleanseSickness.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCleanseSickness : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnCleanseComplete(ADBDPlayer* player);

public:
	UCleanseSickness();
};

FORCEINLINE uint32 GetTypeHash(const UCleanseSickness) { return 0; }
