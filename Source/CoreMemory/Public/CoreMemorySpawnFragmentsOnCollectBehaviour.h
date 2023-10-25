#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentSpawnData.h"
#include "CoreMemorySpawnFragmentsOnCollectBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemorySpawnFragmentsOnCollectBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryFragmentSpawnData _fragmentSpawnData;

public:
	UCoreMemorySpawnFragmentsOnCollectBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentsOnCollectBehaviour) { return 0; }
