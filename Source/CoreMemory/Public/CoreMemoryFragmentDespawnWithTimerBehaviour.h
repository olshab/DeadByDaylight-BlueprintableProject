#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentDespawnWithTimerBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryFragmentDespawnWithTimerBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fragmentPhaseIdleTime;

public:
	UCoreMemoryFragmentDespawnWithTimerBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentDespawnWithTimerBehaviour) { return 0; }
