#pragma once

#include "CoreMinimal.h"
#include "CoreMemorySpawnFragmentOnEventBehaviour.h"
#include "ETileSpawnPointType.h"
#include "CoreMemorySpawnFragmentOnEventWithinRangeOfTargetBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemorySpawnFragmentOnEventWithinRangeOfTargetBehaviour : public UCoreMemorySpawnFragmentOnEventBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType _tileSpawnPointType;

public:
	UCoreMemorySpawnFragmentOnEventWithinRangeOfTargetBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentOnEventWithinRangeOfTargetBehaviour) { return 0; }
