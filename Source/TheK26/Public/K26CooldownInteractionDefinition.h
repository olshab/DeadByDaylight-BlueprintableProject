#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "InteractionDefinition.h"
#include "K26CooldownInteractionDefinition.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26CooldownInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _cooldownTime;

protected:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UK26CooldownInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26CooldownInteractionDefinition) { return 0; }
