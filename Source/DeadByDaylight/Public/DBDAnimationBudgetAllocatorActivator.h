#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDAnimationBudgetAllocatorActivator.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDBDAnimationBudgetAllocatorActivator : public UActorComponent
{
	GENERATED_BODY()

public:
	UDBDAnimationBudgetAllocatorActivator();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAnimationBudgetAllocatorActivator) { return 0; }
