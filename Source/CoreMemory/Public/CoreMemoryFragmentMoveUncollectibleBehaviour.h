#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentMoveUncollectibleBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryFragmentMoveUncollectibleBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maxLineOfSightTries;

public:
	UCoreMemoryFragmentMoveUncollectibleBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentMoveUncollectibleBehaviour) { return 0; }
