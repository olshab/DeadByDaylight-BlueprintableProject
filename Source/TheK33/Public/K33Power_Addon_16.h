#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "K33Power_Addon_16.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33Power_Addon_16 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _activationLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorRangeDistanceFromKillerToTriggerEffect;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerSurvivorsScreamAndReveal(const TArray<ACamperPlayer*>& targetSurvivors);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_TriggerSurvivorScreamAndReveal(ACamperPlayer* targetSurvivor);

public:
	UK33Power_Addon_16();
};

FORCEINLINE uint32 GetTypeHash(const UK33Power_Addon_16) { return 0; }
