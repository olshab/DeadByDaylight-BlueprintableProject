#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Counterforce.generated.h"

class ATotem;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCounterforce : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _totemAuraVisibleDuration;

	UPROPERTY(EditAnywhere)
	float _startingTotemCleanseSpeedBonus;

	UPROPERTY(EditAnywhere)
	float _stackableTotemCleanseSpeedBonus;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ShowTotemAura(ATotem* totem);

public:
	UCounterforce();
};

FORCEINLINE uint32 GetTypeHash(const UCounterforce) { return 0; }
