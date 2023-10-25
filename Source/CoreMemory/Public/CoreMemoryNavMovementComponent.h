#pragma once

#include "CoreMinimal.h"
#include "ActorNavMovementComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "CoreMemoryNavMovementComponent.generated.h"

class UCoreMemoryFragmentNavAgentComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryNavMovementComponent : public UActorNavMovementComponent
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
	FDBDTunableRowHandle _fragmentMoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryFragmentNavAgentComponent* _navAgentComponent;

public:
	UCoreMemoryNavMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryNavMovementComponent) { return 0; }
