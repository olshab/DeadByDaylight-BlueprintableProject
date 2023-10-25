#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryDebugSpawnBehaviour.generated.h"

class ACoreMemoryFragment;

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryDebugSpawnBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACoreMemoryFragment> _fragmentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfFragmentsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _fragmentSpawnOffset;

public:
	UCoreMemoryDebugSpawnBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryDebugSpawnBehaviour) { return 0; }
