#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "AnimationMontageDescriptor.h"
#include "ESkillCheckCustomType.h"
#include "K25SolveLamentConfigurationInteraction.generated.h"

class ASlasherPlayer;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25SolveLamentConfigurationInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeBufferBeforeAllowedToUseInteractionAgain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _failSkillCheckTimePenalty;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _failMontage;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_TriggerKillerStoppedInteractionViaAttackSFX(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX(ASlasherPlayer* killer);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type);

public:
	UK25SolveLamentConfigurationInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25SolveLamentConfigurationInteraction) { return 0; }
