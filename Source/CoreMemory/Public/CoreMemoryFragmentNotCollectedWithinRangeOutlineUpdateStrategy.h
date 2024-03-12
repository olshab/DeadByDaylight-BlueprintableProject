#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryFragmentNotCollectedOutlineUpdateStrategy.h"
#include "CoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class COREMEMORY_API UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy : public UCoreMemoryFragmentNotCollectedOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _auraDisplayedRange;

public:
	UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentNotCollectedWithinRangeOutlineUpdateStrategy) { return 0; }
