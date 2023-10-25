#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "AnimationMontageSlave.generated.h"

class UMontagePlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAnimationMontageSlave : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMontagePlayer(UMontagePlayer* montagePlayer);

	UFUNCTION(BlueprintCallable)
	void SetLeader(UMontagePlayer* leader);

private:
	UFUNCTION(BlueprintCallable)
	void OnMontageStopped(const FAnimationMontageDescriptor id);

	UFUNCTION(BlueprintCallable)
	void OnMontageStarted(const FAnimationMontageDescriptor id, const float rate);

public:
	UAnimationMontageSlave();
};

FORCEINLINE uint32 GetTypeHash(const UAnimationMontageSlave) { return 0; }
