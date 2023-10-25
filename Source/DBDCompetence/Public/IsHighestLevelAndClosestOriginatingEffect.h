#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsHighestLevelAndClosestOriginatingEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _applicableEffects;

private:
	UFUNCTION(BlueprintCallable)
	void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);

public:
	UIsHighestLevelAndClosestOriginatingEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIsHighestLevelAndClosestOriginatingEffect) { return 0; }
