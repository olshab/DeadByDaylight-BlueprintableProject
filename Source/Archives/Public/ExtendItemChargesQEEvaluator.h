#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "EInventoryType.h"
#include "ExtendItemChargesQEEvaluator.generated.h"

class ACamperPlayer;
class ACollectable;
class ADBDPlayer;

UCLASS(Blueprintable)
class UExtendItemChargesQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorRemoved(ACamperPlayer* removedPlayer) const;

	UFUNCTION(BlueprintCallable)
	void OnItemRemoved(ACollectable* removedItem, EInventoryType inventoryType, ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable)
	void OnItemEmpty(ADBDPlayer* itemUser);

	UFUNCTION(BlueprintCallable)
	void OnItemChargeChanged(const float previousCharge, const float currentCharge, ADBDPlayer* itemUser, ACollectable* item);

	UFUNCTION(BlueprintCallable)
	void OnItemAdded(ACollectable* addedItem, EInventoryType inventoryType, ADBDPlayer* player);

public:
	UExtendItemChargesQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UExtendItemChargesQEEvaluator) { return 0; }
