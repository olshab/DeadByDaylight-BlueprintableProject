#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ChainsawRevInteraction.generated.h"

class ASlasherPlayer;
class UAkAudioEvent;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UChainsawRevInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _soundCueDistanceDataID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _chainsawRevStartAkAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _chainsawRevEndAkAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASlasherPlayer* _owningSlasher;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UChainsawRevInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UChainsawRevInteraction) { return 0; }
