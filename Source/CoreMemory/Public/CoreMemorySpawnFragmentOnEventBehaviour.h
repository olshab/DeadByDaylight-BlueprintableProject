#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "GameplayTagContainer.h"
#include "CoreMemoryFragmentSpawnData.h"
#include "CoreMemorySpawnFragmentOnEventBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemorySpawnFragmentOnEventBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _spawnFragmentOnGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryFragmentSpawnData _fragmentSpawnData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _onlyForKiller;

public:
	UCoreMemorySpawnFragmentOnEventBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentOnEventBehaviour) { return 0; }
