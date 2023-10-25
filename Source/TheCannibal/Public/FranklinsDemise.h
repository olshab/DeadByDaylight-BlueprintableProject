#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FranklinsDemise.generated.h"

class ACamperPlayer;
class ACollectable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFranklinsDemise : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _timeBeforeItemIsConsumed;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DroppedEvent(ACamperPlayer* hitPlayer, ACollectable* itemToDrop);

public:
	UFUNCTION(BlueprintPure)
	float GetTimeBeforeItemIsConsumedAtLevel() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void BP_OnPlayerHitCosmetic(ACamperPlayer* hitPlayer, ACollectable* itemToDrop);

public:
	UFranklinsDemise();
};

FORCEINLINE uint32 GetTypeHash(const UFranklinsDemise) { return 0; }
