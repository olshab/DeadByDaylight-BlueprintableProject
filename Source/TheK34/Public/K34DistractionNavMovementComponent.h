#pragma once

#include "CoreMinimal.h"
#include "ActorNavMovementComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "K34DistractionNavMovementComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK34_API UK34DistractionNavMovementComponent : public UActorNavMovementComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	FAIMoveRequest _moveRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UNavigationQueryFilter> _navFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementAcceptanceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _moveSpeed;

public:
	UK34DistractionNavMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34DistractionNavMovementComponent) { return 0; }
