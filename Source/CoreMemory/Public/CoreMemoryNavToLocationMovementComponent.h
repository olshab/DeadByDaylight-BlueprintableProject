#pragma once

#include "CoreMinimal.h"
#include "ActorNavMovementComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryNavToLocationMovementComponent.generated.h"

class UCoreMemoryFragmentNavAgentComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryNavToLocationMovementComponent : public UActorNavMovementComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	FAIMoveRequest _moveRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UNavigationQueryFilter> _navFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementAcceptanceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryFragmentNavAgentComponent* _navAgentComponent;

public:
	UCoreMemoryNavToLocationMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryNavToLocationMovementComponent) { return 0; }
