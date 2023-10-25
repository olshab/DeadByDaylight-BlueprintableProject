#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveToGroundComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UMoveToGroundComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void MoveOwnerToGround();

public:
	UMoveToGroundComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoveToGroundComponent) { return 0; }
