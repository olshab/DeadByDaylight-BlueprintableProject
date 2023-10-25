#pragma once

#include "CoreMinimal.h"
#include "SlasherVaultDefinition.h"
#include "DBDTunableRowHandle.h"
#include "FrenzySlasherVault.generated.h"

class UCurveFloat;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THELEGION_API UFrenzySlasherVault : public USlasherVaultDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _vaultFallSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _frenzyWindowVaultDuration;

private:
	UFUNCTION(BlueprintCallable)
	void OnSlasherSet(ASlasherPlayer* slasher);

public:
	UFrenzySlasherVault();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzySlasherVault) { return 0; }
