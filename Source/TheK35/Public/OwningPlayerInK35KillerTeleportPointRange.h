#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "TunableStat.h"
#include "OwningPlayerInK35KillerTeleportPointRange.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOwningPlayerInK35KillerTeleportPointRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _killerTeleportPointRange;

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroComplete();

	UFUNCTION(BlueprintCallable)
	void OnAcquiredKillerTeleportPointsChanged();

public:
	UOwningPlayerInK35KillerTeleportPointRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInK35KillerTeleportPointRange) { return 0; }
