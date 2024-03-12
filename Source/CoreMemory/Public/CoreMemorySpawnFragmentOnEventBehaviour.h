#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryFragmentSpawnData.h"
#include "GameplayTagContainer.h"
#include "CoreMemorySpawnFragmentOnEventBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemorySpawnFragmentOnEventBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCoreMemoryFragmentSpawnData _fragmentSpawnData;

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _spawnFragmentOnGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _onlyForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _onlyForSurvivors;

public:
	UCoreMemorySpawnFragmentOnEventBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemorySpawnFragmentOnEventBehaviour) { return 0; }
