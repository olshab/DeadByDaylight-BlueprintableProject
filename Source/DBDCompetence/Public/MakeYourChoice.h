#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "MakeYourChoice.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UMakeYourChoice : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumHookedSurvivorDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _exposedEffect;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerEffectAppliedVFX(const ACamperPlayer* player);

public:
	UFUNCTION(BlueprintPure)
	float GetMinimumHookedSurvivorDistance() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTriggerEffectVFX(const ACamperPlayer* player);

public:
	UMakeYourChoice();
};

FORCEINLINE uint32 GetTypeHash(const UMakeYourChoice) { return 0; }
