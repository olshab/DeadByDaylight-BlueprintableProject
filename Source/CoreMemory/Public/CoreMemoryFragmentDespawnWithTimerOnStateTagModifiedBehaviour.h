#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryFragmentDespawnWithTimerBehaviour.h"
#include "GameplayTagContainer.h"
#include "CoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour : public UCoreMemoryFragmentDespawnWithTimerBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _tagsToTrackToStartPhase;

public:
	UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentDespawnWithTimerOnStateTagModifiedBehaviour) { return 0; }
