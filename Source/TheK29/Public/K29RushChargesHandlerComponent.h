#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K29RushChargesHandlerComponent.generated.h"

class ASlasherPlayer;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29RushChargesHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maximumRushCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _rechargeTimeByChargesLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _rechargeDurationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _reducedChargeTimePerInfectionPlayers;

private:
	UFUNCTION(BlueprintCallable)
	void SetToFullCharge();

	UFUNCTION(BlueprintCallable)
	void OnMaximumChargesChanged(const float newValue);

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintPure)
	float GetRechargeDuration() const;

public:
	UFUNCTION(BlueprintPure)
	float GetPercentageRemainingUntilNextCharge() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaximumCharges() const;

	UFUNCTION(BlueprintPure)
	int32 GetAvailableCharges() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushChargeAdded();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOutOfRushCharges();

private:
	UFUNCTION(BlueprintCallable)
	void AddSingleCharge();

public:
	UK29RushChargesHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29RushChargesHandlerComponent) { return 0; }
