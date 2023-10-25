#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentDespawnWithTimerBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryFragmentDespawnWithTimerBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

public:
	UCoreMemoryFragmentDespawnWithTimerBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentDespawnWithTimerBehaviour) { return 0; }
