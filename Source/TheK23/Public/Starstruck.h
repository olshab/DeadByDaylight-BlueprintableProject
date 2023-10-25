#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Starstruck.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UStarstruck : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _exposedEffectDuration;

	UPROPERTY(EditAnywhere)
	float _perkCooldownDuration;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _camperExposedEffects;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkCooldownDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetExposedEffectDurationAtLevel() const;

public:
	UStarstruck();
};

FORCEINLINE uint32 GetTypeHash(const UStarstruck) { return 0; }
