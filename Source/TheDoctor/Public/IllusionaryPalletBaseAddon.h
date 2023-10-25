#pragma once

#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "IllusionaryPalletBaseAddon.generated.h"

class APallet;
class UPrimitiveComponent;
class UIllusionaryPalletComponent;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIllusionaryPalletBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _illusionaryPalletInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UIllusionaryPalletComponent> _palletComponentClass;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DeactivateIllusionaryPallet(APallet* pallet, ADBDPlayer* triggeringPlayer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ActivateIllusionaryPallet(APallet* pallet, bool isPalletDown);

	UFUNCTION()
	void Authority_OnIllusionaryPalletActorOverlapped(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UIllusionaryPalletBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UIllusionaryPalletBaseAddon) { return 0; }
