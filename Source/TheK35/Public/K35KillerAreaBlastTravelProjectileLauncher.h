#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "K35KillerAreaBlastTravelProjectileLauncher.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35KillerAreaBlastTravelProjectileLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _spawnSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _pitchCurve;

public:
	UK35KillerAreaBlastTravelProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerAreaBlastTravelProjectileLauncher) { return 0; }
