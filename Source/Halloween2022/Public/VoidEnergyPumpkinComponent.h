#pragma once

#include "CoreMinimal.h"
#include "VoidEnergyProducer.h"
#include "DBDTunableRowHandle.h"
#include "VoidEnergyPumpkinComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UVoidEnergyPumpkinComponent : public UVoidEnergyProducer
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _treatVoidEnergyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _trickVoidEnergyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _neutralVoidEnergyAmount;

public:
	UVoidEnergyPumpkinComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyPumpkinComponent) { return 0; }
