#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "TunableStat.h"
#include "K35KillerTeleportPointOutlineStrategy.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35KillerTeleportPointOutlineStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _visibleAuraDistanceSurvivor;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UK35KillerTeleportPointOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerTeleportPointOutlineStrategy) { return 0; }
