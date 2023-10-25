#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DialogClipSettings.generated.h"

class UAkAudioEvent;
class UDialogHandlerCondition;

USTRUCT(BlueprintType)
struct FDialogClipSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* Clip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UDialogHandlerCondition> ConditionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDialogHandlerCondition* Condition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOnlyPlayingOnce;

public:
	DEADBYDAYLIGHT_API FDialogClipSettings();
};

FORCEINLINE uint32 GetTypeHash(const FDialogClipSettings) { return 0; }
