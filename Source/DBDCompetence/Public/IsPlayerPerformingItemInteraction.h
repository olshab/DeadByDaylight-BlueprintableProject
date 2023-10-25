#pragma once

#include "CoreMinimal.h"
#include "EItemDropType.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "IsPlayerPerformingItemInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnCollectablePickedUp(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnCollectableDropped(EItemDropType dropType);

	UFUNCTION(BlueprintCallable)
	void OnCollectableChargeStateChange(bool empty);

public:
	UIsPlayerPerformingItemInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerPerformingItemInteraction) { return 0; }
