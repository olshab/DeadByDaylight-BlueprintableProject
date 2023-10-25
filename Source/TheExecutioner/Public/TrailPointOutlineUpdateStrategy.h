#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "DBDTunableRowHandle.h"
#include "TrailPointOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tormentTrailRevealDistance;

public:
	UTrailPointOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTrailPointOutlineUpdateStrategy) { return 0; }
