#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.h"
#include "DBDTunableRowHandle.h"
#include "K31DronePlacementStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DronePlacementStrategy : public UObjectPlacementValidationWithRestrictionStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _sphereSweepRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minHeightAboveGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxHeightAboveGround;

public:
	UK31DronePlacementStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK31DronePlacementStrategy) { return 0; }
