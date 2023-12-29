#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "GameplayTagContainer.h"
#include "EK28NightCycleState.h"
#include "K28SurvivorCosmeticHelperActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AK28SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTagsToDisableNightMode;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UStaticMeshComponent* GetDarknessPlaneMesh() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNighttimeNearingActivation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleChanged(EK28NightCycleState nightCycleState, bool instant);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DeactivateNightGlowVFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateNightGlowVFX();

public:
	AK28SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK28SurvivorCosmeticHelperActor) { return 0; }
