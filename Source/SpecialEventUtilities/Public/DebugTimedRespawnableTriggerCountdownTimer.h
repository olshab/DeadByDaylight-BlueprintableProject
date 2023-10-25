#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugTimedRespawnableTriggerCountdownTimer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UDebugTimedRespawnableTriggerCountdownTimer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CountdownTimeRemaining, meta=(AllowPrivateAccess=true))
	float _countdownTimeRemaining;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CountdownTimeRemaining();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDebugTimedRespawnableTriggerCountdownTimer();
};

FORCEINLINE uint32 GetTypeHash(const UDebugTimedRespawnableTriggerCountdownTimer) { return 0; }
