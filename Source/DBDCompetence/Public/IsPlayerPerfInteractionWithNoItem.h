#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "ELoadoutItemType.h"
#include "IsPlayerPerfInteractionWithNoItem.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _useItemInteractionSemantics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ELoadoutItemType _itemType;

private:
	UFUNCTION(BlueprintCallable)
	void OnCollectableChargeStateChange(bool empty);

public:
	UIsPlayerPerfInteractionWithNoItem();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerPerfInteractionWithNoItem) { return 0; }
