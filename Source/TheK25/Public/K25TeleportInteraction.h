#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "K25TeleportInteraction.generated.h"

class UStatusEffect;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25TeleportInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxNumberLocationQueriesPerTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeSensingLamentConfigurationAfterInteractionEnded;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _slowdownAfterTeleportDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _slowdownAfterTeleportStatusEffectClass;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportKillerToTargetPosition(ASlasherPlayer* killer, FVector location, FRotator rotation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_InitializeHusk(FVector location, FRotator rotation);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TeleportStartEffects(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TeleportEndEffects(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TeleportAbortedEffects(ASlasherPlayer* killer);

public:
	UK25TeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25TeleportInteraction) { return 0; }
