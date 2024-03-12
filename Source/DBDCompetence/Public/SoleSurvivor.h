#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SoleSurvivor.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USoleSurvivor : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _modifyActionSpeedWhenRepairingEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _modifyActionSpeedWhenOpeningGateOrHatchEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _obsessionChanceStatusEffectClass;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeedsRepairing;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeedsOpeningGateOrHatch;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _auraHideDistancePerDeadOrDisconnectedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _otherSurvivors;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorAdded(const ACamperPlayer* survivor);

public:
	USoleSurvivor();
};

FORCEINLINE uint32 GetTypeHash(const USoleSurvivor) { return 0; }
