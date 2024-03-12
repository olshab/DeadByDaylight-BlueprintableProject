#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "SearchChestInteractionBase.generated.h"

class ADBDPlayer;
class ASearchable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USearchChestInteractionBase : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _handleCompletionScoreEvents;

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _searchableCompleteContributionPercentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _scoreEventFired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASearchable* _owningChest;

private:
	UFUNCTION(BlueprintCallable)
	void FireChestScoreEvent(const ADBDPlayer* player);

public:
	USearchChestInteractionBase();
};

FORCEINLINE uint32 GetTypeHash(const USearchChestInteractionBase) { return 0; }
