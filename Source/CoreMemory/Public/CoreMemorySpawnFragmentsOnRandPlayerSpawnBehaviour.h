#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentSpawnData.h"
#include "CoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryFragmentSpawnData _fragmentSpawnData;

public:
	UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour) { return 0; }
