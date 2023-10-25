#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_TheBlight_17.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_17 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorInRangeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hinderedSeconds;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnParticleOnSurvivor(const ACamperPlayer* camperPlayer);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SpawnParticleOnSurvivors(const TArray<ACamperPlayer*>& survivors);

public:
	UAddon_TheBlight_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_17) { return 0; }
