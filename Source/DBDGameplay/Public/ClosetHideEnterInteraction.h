#pragma once

#include "CoreMinimal.h"
#include "ClosetHideInteraction.h"
#include "Templates/SubclassOf.h"
#include "ClosetHideEnterInteraction.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UStatusEffect;
class ALocker;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UClosetHideEnterInteraction : public UClosetHideInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _closetBlindnessStatusEffectClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	float _ejectionFromLockerDelaySeconds;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void NotifyClosetAnalytics(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void EjectSurvivorFromLocker(ACamperPlayer* survivor, ALocker* locker);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AdjustActorLocation(ADBDPlayer* player);

public:
	UClosetHideEnterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UClosetHideEnterInteraction) { return 0; }
