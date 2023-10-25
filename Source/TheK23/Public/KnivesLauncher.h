#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "KnivesLauncher.generated.h"

class AThrowingKnives;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKnivesLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _knifeSpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _knifeSpawnForwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxAmmoTunable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isInSuperModeThrow;

public:
	UFUNCTION(BlueprintPure)
	AThrowingKnives* GetPower() const;

	UFUNCTION(BlueprintPure)
	int32 GetLocallyPredictedAmmo() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKnivesLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UKnivesLauncher) { return 0; }
