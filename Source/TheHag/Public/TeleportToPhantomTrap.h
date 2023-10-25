#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "TeleportToPhantomTrap.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class UStatusEffect;
class APhantomTrap;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEHAG_API UTeleportToPhantomTrap : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _teleportMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _slowdownTimeAfterTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _hagSlowdownAfterTeleportStatusEffect;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsTeleportationPossible(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintPure)
	float GetTeleportMaxDistance(ASlasherPlayer* slasher) const;

	UFUNCTION(BlueprintPure)
	APhantomTrap* GetPhantomTrap() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleport(ASlasherPlayer* slasher, APhantomTrap* trap);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionFinished(ADBDPlayer* slasher, bool hasInteractionStarted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnTeleport(ASlasherPlayer* slasher, APhantomTrap* trap);

public:
	UTeleportToPhantomTrap();
};

FORCEINLINE uint32 GetTypeHash(const UTeleportToPhantomTrap) { return 0; }
