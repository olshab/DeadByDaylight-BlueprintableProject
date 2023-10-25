#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryFragmentToPositionMovementComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentToPositionMovementComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fragmentMoveSpeed;

public:
	UCoreMemoryFragmentToPositionMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentToPositionMovementComponent) { return 0; }
