#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "StaticBlast.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UStaticBlast : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _staticBlastActivationDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _staticBlastMadnessGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _staticBlastSecondsToCharge;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StaticBlastShockSurvivors(const TArray<ACamperPlayer*>& survivorsToShock);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStaticBlastChargeEnd(ADBDPlayer* player, bool charged);

public:
	UStaticBlast();
};

FORCEINLINE uint32 GetTypeHash(const UStaticBlast) { return 0; }
