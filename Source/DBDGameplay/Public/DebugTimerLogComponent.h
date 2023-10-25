#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "DebugTimerLogComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UDebugTimerLogComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FString _timerDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TimerCountdown, meta=(AllowPrivateAccess=true))
	FSpeedBasedNetSyncedValue _timerCountdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _timerRemainingPercent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TimerCountdown();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDebugTimerLogComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDebugTimerLogComponent) { return 0; }
