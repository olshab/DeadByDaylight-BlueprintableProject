#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "ECamperDamageState.h"
#include "TagStateBool.h"
#include "ESkillCheckCustomType.h"
#include "S34P01.generated.h"

class UChargeStrategy;
class UChargeableInteractionDefinition;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK30_API US34P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeStrategy* _chargeStrategyWhenActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableInteractionDefinition* _redirectedInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _startAccumulateSecondaryActionProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _useTokensSecondaryActionProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsPerkActive, meta=(AllowPrivateAccess=true))
	bool _isPerkActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAccumulatingTokens, meta=(AllowPrivateAccess=true))
	FTagStateBool _isAccumulatingTokens;

	UPROPERTY(EditAnywhere)
	float _initialCountdownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _accumulatedPercentMultiplier;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_AbilityTwoPressed(bool isPressed);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsPerkActive();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAccumulatingTokens();

	UFUNCTION(BlueprintCallable)
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnUseTokens();

public:
	UFUNCTION(BlueprintPure)
	bool IsPerkActive() const;

	UFUNCTION(BlueprintPure)
	float GetInitialCountdownAtLevel() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnUseCharge(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStopChargingPerk(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartChargingPerk(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFullCharge(ADBDPlayer* owningPlayer);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OnAccumulateRedirectedCharge(const float chargeAmount, const float maxCharge);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US34P01();
};

FORCEINLINE uint32 GetTypeHash(const US34P01) { return 0; }
