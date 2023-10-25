#pragma once

#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "K25ProjectileLauncher.generated.h"

class AK25ControlledProjectile;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ProjectileLauncher : public UBaseProjectileLauncher
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _controlledProjectileInitialSpeed;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isControlledProjectileRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK25ControlledProjectile* _controlledProjectile;

public:
	UK25ProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UK25ProjectileLauncher) { return 0; }
