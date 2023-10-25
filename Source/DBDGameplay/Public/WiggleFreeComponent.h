#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WiggleFreeComponent.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleFreeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _killerWigglingFrom;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnWiggleEnd();

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker);

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	UWiggleFreeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleFreeComponent) { return 0; }
