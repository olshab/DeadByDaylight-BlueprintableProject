#pragma once

#include "CoreMinimal.h"
#include "AkEventWithSubtitle.h"
#include "GameplayTagContainer.h"
#include "DialogPlannedPlayback.generated.h"

USTRUCT(BlueprintType)
struct FDialogPlannedPlayback
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FAkEventWithSubtitle> PlannedClip;

	UPROPERTY(EditAnywhere, Transient)
	FGameplayTag GameEventTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDeletingAfterTrigger;

public:
	DEADBYDAYLIGHT_API FDialogPlannedPlayback();
};

FORCEINLINE uint32 GetTypeHash(const FDialogPlannedPlayback) { return 0; }
