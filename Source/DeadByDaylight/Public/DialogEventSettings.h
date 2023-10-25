#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EDialogConditionSubject.h"
#include "DialogClipSettings.h"
#include "DialogEventSettings.generated.h"

USTRUCT(BlueprintType)
struct FDialogEventSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEventTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDialogConditionSubject ConditionSubject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OnlyPlayIfLocallyObserved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDialogClipSettings> Clips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OverrideCurrentAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayUntilPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlayProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EventPriority;

public:
	DEADBYDAYLIGHT_API FDialogEventSettings();
};

FORCEINLINE uint32 GetTypeHash(const FDialogEventSettings) { return 0; }
