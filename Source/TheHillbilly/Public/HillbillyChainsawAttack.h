#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttack.h"
#include "StatProperty.h"
#include "HillbillyChainsawAttack.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UHillbillyChainsawAttack : public UBaseChainsawAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _initialChainsawTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _chainsawTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _turnRateAdjustmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _overheatMaxSpeedOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _overheatMaxSpeedAdjustmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _attackZoneScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _obstructionZoneScaleFactor;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAttackFinished(ADBDPlayer* player);

public:
	UHillbillyChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttack) { return 0; }
