#pragma once

#include "CoreMinimal.h"
#include "InvitationInteractionDefinition.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "KillerNegateStunInteraction.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AInteractable;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKillerNegateStunInteraction : public UInvitationInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _negateStunEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _negateStunEffectIconShow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _negateStunPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _negateStunDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_StatusEffect, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _negateStunStatusEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_StatusEffect(UStatusEffect* previousStatusEffect);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionUpdateStart(ADBDPlayer* interactingPlayer, AInteractable* interactable);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKillerNegateStunInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UKillerNegateStunInteraction) { return 0; }
