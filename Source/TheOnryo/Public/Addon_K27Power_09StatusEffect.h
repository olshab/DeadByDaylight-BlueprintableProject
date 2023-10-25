#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_09StatusEffect.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_09StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _condemnNeededForBlind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _blindnessEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _blindnessStatusEffectClass;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurviorCondemnChange(ACamperPlayer* player, float condemnLevel);

public:
	UAddon_K27Power_09StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_09StatusEffect) { return 0; }
