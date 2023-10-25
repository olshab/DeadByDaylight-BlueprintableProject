#pragma once

#include "CoreMinimal.h"
#include "BlindingFXComponent.h"
#include "KillerBlindingFXComponent.generated.h"

class UAkAudioEvent;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerBlindingFXComponent : public UBlindingFXComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _blindedSound;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnBlindedByPlayersCosmetic(const TArray<ADBDPlayer*>& players);

public:
	UKillerBlindingFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerBlindingFXComponent) { return 0; }
