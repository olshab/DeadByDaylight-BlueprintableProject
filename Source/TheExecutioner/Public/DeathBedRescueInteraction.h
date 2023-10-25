#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "DeathBedRescueInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDeathBedRescueInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _loudNoiseRange;

private:
	UFUNCTION(BlueprintPure)
	FVector GetRescuerSnapPosition() const;

public:
	UDeathBedRescueInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDeathBedRescueInteraction) { return 0; }
