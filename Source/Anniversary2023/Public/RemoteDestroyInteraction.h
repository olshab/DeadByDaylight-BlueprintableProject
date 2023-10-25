#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "RemoteDestroyInteraction.generated.h"

class AInteractable;
class ADBDPlayer;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class URemoteDestroyInteraction : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _remoteDestroyDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AInteractable* _interactable;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoteDestroy(ADBDPlayer* player, AInteractable* interactable);

protected:
	UFUNCTION(BlueprintCallable)
	void ExplodeInteractable(ADBDPlayer* player, AInteractable* interactable) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemoteDestroy(ADBDPlayer* interactingPlayer, AInteractable* interactable);

public:
	URemoteDestroyInteraction();
};

FORCEINLINE uint32 GetTypeHash(const URemoteDestroyInteraction) { return 0; }
