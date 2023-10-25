#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryStatusEffectDetails.h"
#include "CoreMemoryImposeStatusEffectBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryImposeStatusEffectBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnFragmentCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnMemoryAcquired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnStartedSynchronizingMemory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCoreMemoryStatusEffectDetails _statusEffectToImposeOnMemorySynchronized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldUseSameEffectForLastFragment;

public:
	UCoreMemoryImposeStatusEffectBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryImposeStatusEffectBehaviour) { return 0; }
