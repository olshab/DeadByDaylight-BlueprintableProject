#pragma once

#include "CoreMinimal.h"
#include "SpeedBasedNetSyncedValue.h"
#include "Perk.h"
#include "ECamperDamageState.h"
#include "LuckyBreak.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULuckyBreak : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _maxActivationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize, meta=(AllowPrivateAccess=true))
	float _minActivationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize, meta=(AllowPrivateAccess=true))
	float _healingTimeToActivationTimeRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isRecharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FSpeedBasedNetSyncedValue _activationTime;

public:
	UFUNCTION(BlueprintPure)
	float GetMinActivationTime() const;

	UFUNCTION(BlueprintPure)
	float GetMaxActivationTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHealingTimeToActivationTimeRatio() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_TryActivatePerk();

	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION(BlueprintCallable)
	void ActivationTimerEnded();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULuckyBreak();
};

FORCEINLINE uint32 GetTypeHash(const ULuckyBreak) { return 0; }
