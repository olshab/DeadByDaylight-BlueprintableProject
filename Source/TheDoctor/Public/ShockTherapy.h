#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "ShockTherapy.generated.h"

class UStatusEffect;
class ADBDPlayer;
class AShockTherapyAOE;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UShockTherapy : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AShockTherapyAOE> _shockTherapyConeAOEClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AShockTherapyAOE> _shockTherapyLineAOEClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AShockTherapyAOE> _shockTherapyCircleAOEClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AShockTherapyAOE*> _shockTherapyZones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _shockTherapyDetonationDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shockTherapyBlockActionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shockTherapySecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _shockTherapyBlockAllInteractionsEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shockTherapyMadnessGain;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DetonateShockTherapy(const TArray<ACamperPlayer*>& shockedSurvivors, float madnessToAdd);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ActivateShockTherapyAOE(const FTransform& shockTherapyZoneTransform);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnShockTherapyChargeEnd(ADBDPlayer* player, bool charged);

public:
	UShockTherapy();
};

FORCEINLINE uint32 GetTypeHash(const UShockTherapy) { return 0; }
