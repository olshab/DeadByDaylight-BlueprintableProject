#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryHideAllFragmentsBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class COREMEMORY_API UCoreMemoryHideAllFragmentsBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

public:
	UCoreMemoryHideAllFragmentsBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryHideAllFragmentsBehaviour) { return 0; }
