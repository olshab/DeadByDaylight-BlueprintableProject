#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentMoveUnpredictableBehaviour.generated.h"

class AMeatHook;

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryFragmentMoveUnpredictableBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AMeatHook*> _cachedMeatHooks;

public:
	UCoreMemoryFragmentMoveUnpredictableBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentMoveUnpredictableBehaviour) { return 0; }
