#pragma once

#include "CoreMinimal.h"
#include "DialogHandlerConditionContainer.h"
#include "DialogClipSettings.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FDialogClipSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* Clip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDialogHandlerConditionContainer ConditionContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOnlyPlayingOnce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasSubtitles;

public:
	DEADBYDAYLIGHT_API FDialogClipSettings();
};

FORCEINLINE uint32 GetTypeHash(const FDialogClipSettings) { return 0; }
