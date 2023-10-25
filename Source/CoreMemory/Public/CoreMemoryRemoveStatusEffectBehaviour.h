#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryRemoveStatusEffectBehaviour.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryRemoveStatusEffectBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnFragmentCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnMemoryAcquired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnStartedSynchronizingMemory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToRemoveOnMemorySynchronized;

public:
	UCoreMemoryRemoveStatusEffectBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryRemoveStatusEffectBehaviour) { return 0; }
