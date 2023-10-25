#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "GameplayTagContainer.h"
#include "CoreMemoryDefaultQuestProgressBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryDefaultQuestProgressBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _onPlayerExitWithMemoryAcquiredScoreTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _onFragmentCollectedScoreTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _onMemoryAcquiredScoreTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _onMemorySynchronizedScoreTag;

public:
	UCoreMemoryDefaultQuestProgressBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryDefaultQuestProgressBehaviour) { return 0; }
