#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneLaserController.generated.h"

class ULocalPlayerTrackerComponent;
class AK31DroneLaserScanActor;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneLaserController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _locallyObservedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK31DroneLaserScanActor* _laserActor;

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

public:
	UK31DroneLaserController();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneLaserController) { return 0; }
