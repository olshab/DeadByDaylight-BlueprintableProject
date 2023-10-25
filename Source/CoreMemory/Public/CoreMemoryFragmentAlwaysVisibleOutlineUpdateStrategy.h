#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "CoreMemoryFragmentAlwaysVisibleOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentAlwaysVisibleOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UCoreMemoryFragmentAlwaysVisibleOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentAlwaysVisibleOutlineUpdateStrategy) { return 0; }
