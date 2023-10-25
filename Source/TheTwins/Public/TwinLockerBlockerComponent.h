#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "Templates/SubclassOf.h"
#include "TwinLockerBlockerComponent.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinLockerBlockerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UInteractionDefinition>> _interactionClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UInteractionDefinition>> _interactionsToDisableOnLockerClasses;

private:
	UFUNCTION(BlueprintCallable)
	void OnPushedMontageStopped(const FAnimationMontageDescriptor montageDescriptor);

	UFUNCTION(BlueprintCallable)
	void OnPushedMontageStarted(const FAnimationMontageDescriptor montageDescriptor, const float rate);

	UFUNCTION(BlueprintCallable)
	void OnPushedMontageEnded(const FAnimationMontageDescriptor montageDescriptor, bool interrupted);

	UFUNCTION(BlueprintCallable)
	void OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

public:
	UFUNCTION(BlueprintPure)
	bool IsTwinAttachedToLocker() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	UTwinLockerBlockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinLockerBlockerComponent) { return 0; }
