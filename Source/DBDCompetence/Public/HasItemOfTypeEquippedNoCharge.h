#pragma once

#include "CoreMinimal.h"
#include "HasItemOfTypeEquipped.h"
#include "HasItemOfTypeEquippedNoCharge.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHasItemOfTypeEquippedNoCharge : public UHasItemOfTypeEquipped
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnItemChargeStateChanged(bool isEmpty);

public:
	UHasItemOfTypeEquippedNoCharge();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeEquippedNoCharge) { return 0; }
