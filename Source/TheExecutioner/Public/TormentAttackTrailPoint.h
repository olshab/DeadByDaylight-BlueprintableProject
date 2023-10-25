#pragma once

#include "CoreMinimal.h"
#include "BaseTormentTrailPoint.h"
#include "DBDTunableRowHandle.h"
#include "TormentAttackTrailPoint.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ATormentAttackTrailPoint : public ABaseTormentTrailPoint
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attackPointDelayToEnableCollision;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayTrailSplineMesh(const USplineComponent* splinemesh, const int32 indexInTrail);

public:
	ATormentAttackTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const ATormentAttackTrailPoint) { return 0; }
