#pragma once

#include "CoreMinimal.h"
#include "SurvivorTrapPerk.h"
#include "GameplayTagContainer.h"
#include "ETrapRemovedReason.h"
#include "Templates/SubclassOf.h"
#include "S39P02.generated.h"

class ADBDPlayer;
class UStatusEffect;
class ATrapChemicalBomb;
class APallet;
class AInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US39P02 : public USurvivorTrapPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _invalidEventTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _slowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _slowAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _slowEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _slowStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ATrapChemicalBomb> _trapBombClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ATrapChemicalBomb* _trapChemicalBomb;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnTrapTriggered(const AInteractable* pallet, const ADBDPlayer* triggerer);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnTrapRemoved(AInteractable* interactable, ETrapRemovedReason removedReason);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnTrapActivated(const APallet* generator);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_Cosmetic_OnSlowEffectEnded(const ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintPure)
	float GetSlowTime() const;

public:
	UFUNCTION(BlueprintPure)
	ATrapChemicalBomb* GetChemicalBombTrap() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TrapTriggered(const AInteractable* pallet, const ADBDPlayer* triggerer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TrapRemoved(AInteractable* interactable, ETrapRemovedReason removedReason);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TrapActivated(const APallet* pallet);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSlowEffectEnded(const ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US39P02();
};

FORCEINLINE uint32 GetTypeHash(const US39P02) { return 0; }
