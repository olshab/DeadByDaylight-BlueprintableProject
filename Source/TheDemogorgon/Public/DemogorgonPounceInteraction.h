#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DemogorgonPounceInteraction.generated.h"

class UStatusEffect;
class ASlasherPlayer;
class UChargedAttackStateComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _demogorgonPounceFOVStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargedAttackStateComponent* _chargedAttackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _owningSlasher;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void TriggerHuntingAudioEvent(bool isHunting);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void TriggerChargeCancelAudioEvent();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnChargedAttackReadyChanged(bool ready);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnCancelCooldownComplete();

public:
	UDemogorgonPounceInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceInteraction) { return 0; }
