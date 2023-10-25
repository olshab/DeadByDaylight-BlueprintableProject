#pragma once

#include "CoreMinimal.h"
#include "EItemDropType.h"
#include "Components/ActorComponent.h"
#include "CollectableAudioComponent.generated.h"

class UItemAddon;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCollectableAudioComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void PostAudioEvent(const FString& audioCall);

	UFUNCTION(BlueprintCallable)
	void PlayerPickedUpCollectable(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnItemDropped(EItemDropType dropType);

	UFUNCTION(BlueprintCallable)
	void OnChargeEmpty();

	UFUNCTION(BlueprintCallable)
	void EnableComponent();

	UFUNCTION(BlueprintCallable)
	void AddonConsumed(UItemAddon* addon);

public:
	UCollectableAudioComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCollectableAudioComponent) { return 0; }
