#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "BloodlustExposeInteraction.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBloodlustExposeInteraction : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _effectToApply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _bloodlustExposeDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _camper;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_BloodlustExpose(ADBDPlayer* player, ACamperPlayer* target);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BloodlustExpose(ADBDPlayer* player, ACamperPlayer* target);

public:
	UBloodlustExposeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBloodlustExposeInteraction) { return 0; }
