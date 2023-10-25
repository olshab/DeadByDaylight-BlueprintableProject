#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryHideAllFragmentsBehaviour.h"
#include "CoreMemoryHideUntriggeredFragmentsBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class COREMEMORY_API UCoreMemoryHideUntriggeredFragmentsBehaviour : public UCoreMemoryHideAllFragmentsBehaviour
{
	GENERATED_BODY()

public:
	UCoreMemoryHideUntriggeredFragmentsBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryHideUntriggeredFragmentsBehaviour) { return 0; }
