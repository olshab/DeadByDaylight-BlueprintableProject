#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoreMemorySpawnedStatusEffectTrackerComponent.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class UStatusEffect;
class UCoreMemoryImposeStatusEffectBehaviour;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemorySpawnedStatusEffectTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<UStatusEffect>> _authority_spawnedStatusEffects;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UCoreMemoryImposeStatusEffectBehaviour> _authority_imposeStatusEffectBehaviour;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_AddSpawnedStatusEffect(UStatusEffect* statusEffect, ACoreMemoryChallengePlayerSpecificController* playerController);

public:
	UCoreMemorySpawnedStatusEffectTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnedStatusEffectTrackerComponent) { return 0; }
