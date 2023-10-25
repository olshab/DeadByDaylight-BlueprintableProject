#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TwinJumpAudioMutedEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinJumpAudioMutedEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinUnmuted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinMuted();

public:
	UTwinJumpAudioMutedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAudioMutedEffect) { return 0; }
