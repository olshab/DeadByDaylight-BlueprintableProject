#pragma once

#include "CoreMinimal.h"
#include "HasItemOfTypeInInventory.h"
#include "HasItemOfTypeInInventoryNoCharge.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHasItemOfTypeInInventoryNoCharge : public UHasItemOfTypeInInventory
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnItemChargeStateChanged(bool isEmpty);

public:
	UHasItemOfTypeInInventoryNoCharge();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeInInventoryNoCharge) { return 0; }
