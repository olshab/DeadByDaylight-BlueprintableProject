#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EChainStrikeEndReason.h"
#include "K25ChainStrikeReplicationComponent.generated.h"

class UK25ChainStrikeInteraction;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25ChainStrikeReplicationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_EndChainStrike(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EndChainStrike(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason);

public:
	UK25ChainStrikeReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeReplicationComponent) { return 0; }
