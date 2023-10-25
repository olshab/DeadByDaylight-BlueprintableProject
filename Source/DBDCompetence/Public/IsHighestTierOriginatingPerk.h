#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsHighestTierOriginatingPerk.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _applicableEffects;

private:
	UFUNCTION(BlueprintCallable)
	void OnStatusEffectApplicableChanged(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable);

	UFUNCTION(BlueprintCallable)
	void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);

public:
	UIsHighestTierOriginatingPerk();
};

FORCEINLINE uint32 GetTypeHash(const UIsHighestTierOriginatingPerk) { return 0; }
