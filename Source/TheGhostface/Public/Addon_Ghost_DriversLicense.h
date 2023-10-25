#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "Addon_Ghost_DriversLicense.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UAddon_Ghost_DriversLicense : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _progressLoss;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _blockedTime;

public:
	UAddon_Ghost_DriversLicense();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Ghost_DriversLicense) { return 0; }
