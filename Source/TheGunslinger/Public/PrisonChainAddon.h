#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "PrisonChainAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPrisonChainAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTensionCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _tensionChargeModifier;

public:
	UPrisonChainAddon();
};

FORCEINLINE uint32 GetTypeHash(const UPrisonChainAddon) { return 0; }
