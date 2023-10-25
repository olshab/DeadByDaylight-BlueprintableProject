#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "ActorPathFollowingComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UActorPathFollowingComponent : public UPathFollowingComponent
{
	GENERATED_BODY()

public:
	UActorPathFollowingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorPathFollowingComponent) { return 0; }
