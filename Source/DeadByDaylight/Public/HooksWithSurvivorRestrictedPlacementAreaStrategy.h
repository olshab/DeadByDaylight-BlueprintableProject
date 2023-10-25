#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "HooksWithSurvivorRestrictedPlacementAreaStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHooksWithSurvivorRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle RestrictedSphericalRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRestrictionLingeringEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _restrictionLingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useSphericalZoneForBasementHooks;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FVector> RestrictedSphericalLocations;

public:
	UHooksWithSurvivorRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHooksWithSurvivorRestrictedPlacementAreaStrategy) { return 0; }
