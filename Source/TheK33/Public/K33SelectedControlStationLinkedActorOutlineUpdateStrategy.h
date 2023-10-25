#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "K33SelectedControlStationLinkedActorOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33SelectedControlStationLinkedActorOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _revealedColorForSelectedLinkedControlStation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _revealedColorForTargetedLinkedControlStation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _exitProximityDistance;

public:
	UK33SelectedControlStationLinkedActorOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK33SelectedControlStationLinkedActorOutlineUpdateStrategy) { return 0; }
