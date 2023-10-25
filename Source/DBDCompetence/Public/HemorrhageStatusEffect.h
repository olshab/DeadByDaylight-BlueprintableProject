#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "CamperHealResult.h"
#include "HemorrhageStatusEffect.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHemorrhageStatusEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cooldownFXTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _removeEffectWhenFullyHealed;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnStoppedHealing(const ADBDPlayer* instigator, const ADBDPlayer* target);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorHealed(const FCamperHealResult& healResult);

public:
	UHemorrhageStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHemorrhageStatusEffect) { return 0; }
