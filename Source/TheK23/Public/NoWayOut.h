#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "NoWayOut.generated.h"

class ADBDPlayer;
class AEscapeDoor;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNoWayOut : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _exitGatePanelBlockBaseDuration;

	UPROPERTY(EditAnywhere)
	float _exitGatePanelBlockDurationPerToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _hookedSurvivors;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerLoudNoise(ADBDPlayer* instigator, AEscapeDoor* escapeDoor);

public:
	UFUNCTION(BlueprintPure)
	float GetExitGatePanelBlockDurationPerTokenAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetExitGatePanelBlockBaseDurationAtLevel() const;

public:
	UNoWayOut();
};

FORCEINLINE uint32 GetTypeHash(const UNoWayOut) { return 0; }
